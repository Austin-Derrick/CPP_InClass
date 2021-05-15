#include <iostream>
#include <stdlib.h>

int DivideIntegers(int dividend, int divisor){
    int quotient = 0;
    int absDividend = abs(dividend);
    int absDivisor = abs(divisor);

    int sign = divisor < 0 || divisor < 0 ? -1 : 1;
    
    while (absDividend >= absDivisor)
    {
        absDividend -= absDivisor;
        quotient++;
    }
    return (int)quotient * sign;
}

int main(){
    // 10
    std::cout<<DivideIntegers(100, 10)<<std::endl;
    // -8
    std::cout<<DivideIntegers(64, -8)<<std::endl;
    // 111
    std::cout<<DivideIntegers(1000, 9)<<std::endl;
}