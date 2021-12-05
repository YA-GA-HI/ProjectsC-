#include <iostream>

bool odd(int num)
{
    if(num%2 == 0)
    {
        return true;
    }else{
        return false ;
    }
}

int main()
{
    std::cout<< "Enter a valid number";
    int num ; 
    std::cin >> num;
    if(odd(num))
    {
        std::cout<< "The number you enterred "<< num<<" is odded";
    }else{
        std::cout<< "The number you enterred "<< num<<" is even";
    }
}