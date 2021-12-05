#include<iostream>
int main()
{
    int year, mounth;
    std::cout<<"Enter a Year :";
    std::cin>>year;
    std::cout<<"Enter a Month :";
    std::cin>>mounth;

    switch(mounth)
    {
        case 2:
        ( year % 4 == 0 && year %100 != 0 && year%400 == 0 )?
        std::cout<<"There is 29 Days":
        std::cout<<"There is 28 Days"; 
        break;
        case 4:
        std::cout<<"There is 30 Days";
        break;
        case 6 :
        std::cout<<"There is 30 Days";
        break;
        case 9:
        std::cout<<"There is 30 Days";
        break;
        case 11:
        std::cout<<"There is 30 Days";
        break;
        default:
        std::cout<<"There is 31 Days";
        break;
    }
}