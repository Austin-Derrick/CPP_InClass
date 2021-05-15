#include <iostream>
#include <cstdio>
#include <stdio.h>

void CheckPalindrome(int num){
    if (num < 0 || (num % 10 == 0 && num != 0))
    {
        std::cout<<"NOT a palindrome"<<std::endl;
        return;
    }
    
    int halfNum = 0;
    while (num > halfNum)
    {
        halfNum = halfNum * 10 + num % 10;
        num /= 10;
    }
    
    if (num == halfNum || num == halfNum / 10)
    {
        std::cout<<"IS a palindrome"<<std::endl;
        return;
    }
    
    std::cout<<"NOT a palindrome"<<std::endl;
}

int main(){
    int userNum = 0;
    bool continueCheck = true;
    while (continueCheck)
    {
        userNum = 0;
        std::cout<<"Enter a number to see if it is a palindrome"<<std::endl;
        std::cin >> userNum;
        CheckPalindrome(userNum);

        std::cout<<"Would you like to enter another number? 1 - YES 2 - NO"<<std::endl;
        std::cin >> userNum;

        if (userNum == 1){ continue; }
        else { continueCheck = false; }
    }
}