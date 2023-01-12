#include <iostream>

template<class T>
class Array
{
    public:
        Array() : _size(0), _array(new T[0]){};
        Array(unsigned int n): _size(n), _array(new T[n]){};
        Array(const Array &other)
        {
            this->_size = other._size;
            this->_array = new T[other._size];
            for (unsigned int i; i < other._size; i++)
                this->_array[i] = other._array[i];
        }

        ~Array()
        {
            delete [] this->_array;
        }

        Array &operator=(const Array &rhs)
        {
            if (this != &rhs)
            {
                this->~Array();
                this->_size = rhs._size;
                this->_array = new T[rhs._size];
                for (unsigned int i; i < rhs._size; i++)
                    this->_array[i] = rhs._array[i];
            }
            return *this;
        }

        T &operator[](unsigned int index)
        {
            if (index >= this->_size)
                throw OutOfRangeException();
            return this->_array[index];
        }

        unsigned int size()
        {
            return this->_size;
        }

        class OutOfRangeException : public std::exception
        {
        public:
            const char* what() const throw()
            {
                return ("Element is out of range of array");
            }
        };
    private:
        unsigned int _size;
        T *_array;
};