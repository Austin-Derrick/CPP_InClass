#include <iostream>
#include <cstdio>
#include <stdio.h>


int stringToInt(std::string _string)
{
    int currentChar = 0;
    int sign = 1;
    int intResult = 0;
    
    while (currentChar < _string.length() && _string.at(currentChar) == ' ')
    {
        std::cout << "found a space" << std::endl;
        currentChar++;
    }
    
    if (currentChar < _string.length() && (_string.at(currentChar) == '+' || _string.at(currentChar) == '-'))
    {
        if (_string.at(currentChar) == '+')
        {
            sign = 1;
        }
        if (_string.at(currentChar) == '-')
        {
            sign = -1;
        }
        currentChar++;
    }
    
    while (currentChar < _string.length() && (_string.at(currentChar) >= '0' && _string.at(currentChar) <= '9'))
    {
        if (intResult > INT32_MAX / 10 || 
        (intResult == INT32_MAX / 10 && _string.at(currentChar) - '0' > INT32_MAX % 10))
        {
            return (sign == 1)? INT32_MAX : INT32_MIN;
        }

        intResult = intResult * 10 + (_string.at(currentChar) - '0');
        currentChar++;
    }
    return intResult * sign;
}

int main(){
    std::cout<<stringToInt("5622")<<std::endl;
}