#include <string>
#include <iostream>

class convertType
{
public:

    convertType(const std::string &stringLiteral);
    convertType(convertType &other);


    convertType &operator=(const convertType &rhs);


    ~convertType();

    int     toInt() const;
    char    toChar() const;
    float   toFloat() const;
    double  toDouble() const;

    class InvalidInput : std::exception
    {
        public:
            const char * what () const throw() 
            {
                return ("Invalid Input");
            }
    };

    class NonDisplayable : std::exception
    {
        public:
            const char * what () const throw() 
            {
                return ("Cannot display value");
            }
    };

        class Impossible : std::exception
    {
        public:
            const char * what () const throw() 
            {
                return ("Impossible");
            }
    };

private:

    const std::string _stringLiteral;
    char                _charVal;
    int                 _intVal;
    float               _floatVal;
    double              _doubleVal;
    enum ConverDT {intType, charType, floatType, doubleType} _dataTypes;
};

std::ostream &operator<<(std::ostream &o, const convertType &rhs);