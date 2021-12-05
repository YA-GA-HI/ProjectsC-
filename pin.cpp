#include <iostream>
int main()
{
    unsigned int pin , pintried , tries = 5 ;
    pin = 101000000;
    do{
        std::cout<<"Enter the valid pin: ";
        std::cin>>pintried;
        if(pin == pintried)
        {
            std::cout<<"The pin is correct !";
            
        }else{
            std::cout<<"The pin is incorrect , Try again ! You steel have "<<tries-1 <<" tries.\n";
            tries--;
        }
    }
    while(tries>0 && pin != pintried);
}