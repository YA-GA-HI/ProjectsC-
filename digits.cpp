#include <iostream>

int main()
{
    int num , i , originalnum;
    std::cout<<"Enter a valid namuber : " << std::endl;
    std::cin>> num;
    originalnum = num;
    if(num>0)
    {

    
        do{
            i++;
            num *= 0.1;
        }
        while(num>0);
    }else if(num<0)
    {
        do{
            i++;
            num *= 0.1;
        }
        while(num<0);
    }
    std::cout<<"The number you enterred "<<originalnum<<" has "<< i<< " digits" ;
}