#include "converttypes.hpp"
#include <cmath>
#include <iomanip>

convertType::convertType(const std::string &stringLiteral) 
    : _stringLiteral(stringLiteral)
{
    if (stringLiteral.empty())
        throw convertType::InvalidInput();
    else if (stringLiteral.size() == 1)
    {
        if (isdigit(stringLiteral.front()))
        {
            this->_intVal = static_cast<int>(strtol(stringLiteral.c_str(), NULL, 10));
            this->_dataTypes = intType;
        }
        else
        {
            this->_charVal = stringLiteral.front();
            this->_dataTypes = charType;
        }
    }
    else
    {
        char *endNum;
        long longNum = strtol(stringLiteral.c_str(), &endNum, 10);
        char *endDouble;
        double doubleNum = strtof(stringLiteral.c_str(), &endDouble);
        
        if (*endNum)
        {
            if (*endDouble)
            {
                 if (*endDouble == 'f')
                {
                    this->_floatVal = static_cast<float>(doubleNum);
                    this->_dataTypes = floatType;
                }
                else
                    throw convertType::InvalidInput();
            }
            else
            {
                this->_doubleVal = doubleNum;
                this->_dataTypes = doubleType;
            }
        }
        else
        {
            if (longNum > std::numeric_limits<int>::max() || longNum < std::numeric_limits<int>::min())
                throw convertType::InvalidInput();
            else
            {
                this->_intVal = static_cast<int>(longNum);
                this->_dataTypes = intType;
            }
        }
    }
}

convertType::~convertType()
{
}

char convertType::toChar() const
{
    char c;
    switch (this->_dataTypes)
    {
    case charType:
        return this->_charVal;
    case intType:
        c = static_cast<char>(this->_intVal);
        if(!isprint(c))
            throw convertType::NonDisplayable();
        else
            return c;
    case floatType:
        c = static_cast<char>(this->_floatVal);
        if (isnan(this->_floatVal) || isinf(this->_floatVal)
            || this->_floatVal > std::numeric_limits<char>::max() || this->_floatVal < std::numeric_limits<char>::min())
            throw convertType::Impossible();
        else if(!isprint(c))
            throw convertType::NonDisplayable();
        else
            return c;
    case doubleType:
        c = static_cast<char>(this->_doubleVal);
         if (isnan(this->_doubleVal) || isinf(this->_doubleVal)
            || this->_doubleVal > std::numeric_limits<char>::max() || this->_doubleVal < std::numeric_limits<char>::min())
            throw convertType::Impossible();
        else if(!isprint(c))
            throw convertType::NonDisplayable();
        else
            return c;
    default:
        break;
    }
}

int convertType::toInt() const
{
    switch(this->_dataTypes)
    {
    case charType:
        return static_cast<int>(this->_charVal);
    case intType:
        return(this->_intVal);
    case floatType:
        if (isnan(this->_floatVal) || isinf(this->_floatVal)
            || this->_floatVal > std::numeric_limits<char>::max() || this->_floatVal < std::numeric_limits<char>::min())
            throw convertType::Impossible();
        else
            return static_cast<int>(this->_floatVal);
    case doubleType:
        if (isnan(this->_doubleVal) || isinf(this->_doubleVal)
            || this->_doubleVal > std::numeric_limits<char>::max() || this->_doubleVal < std::numeric_limits<char>::min())
            throw convertType::Impossible();
        else
            return static_cast<int>(this->_doubleVal);
    default:
        break;
    }
}

float convertType::toFloat() const
{
    switch(this->_dataTypes)
    {
    case charType:
        return static_cast<float>(this->_charVal);
    case intType:
        return static_cast<float>(this->_intVal);
    case floatType:
        return (this->_floatVal);
    case doubleType:
        return static_cast<float>(this->_doubleVal);
    default:
        break;
    }
}

double convertType::toDouble() const
{
 switch(this->_dataTypes)
    {
    case charType:
        return static_cast<double>(this->_charVal);
    case intType:
        return static_cast<double>(this->_intVal);
    case floatType:
        return static_cast<double>(this->_floatVal);
    case doubleType:
        return (this->_doubleVal);
    default:
        break;
    }
} 

std::ostream &operator<<(std::ostream &o, const convertType &rhs)
{
    o << "char: ";
    try
    {
        char c;
        c = rhs.toChar();
        o << "'" << c << "'" << std::endl;
    }
    catch(const std::exception &e)
    {
        o << e.what() << std::endl;
    }
    o << "int: ";
    try
    {
        int i;
        i = rhs.toInt();
        o << i << std::endl;
    }
    catch(const std::exception &e)
    {
        o << e.what() << std::endl;
    }
    o << "float: ";
    try
    {
        float f;
        f = rhs.toFloat();
        double intPart;
        if (modf(f, &intPart) == 0)
            o.precision(1);
        o << std::fixed << f << f << std::endl;
    }
    catch(const std::exception &e)
    {
        o << e.what() << std::endl;
    }
    o << "double: ";
    try
    {
        double d;
        d = rhs.toDouble();
         double intPart;
        if (modf(d, &intPart) == 0)
            o.precision(1);
        o << std::fixed << d << std::endl;
    }
     catch(const std::exception &e)
    {
        o << e.what() << std::endl;
    }
    return o;
}