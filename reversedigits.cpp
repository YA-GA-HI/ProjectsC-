#include <iostream>
#include <cmath>
int main()
{
    int num , i ,originalnum ,result = 0;
    std::cout<<"Enter a valid namuber : " ;
    std::cin>> num;
    originalnum = num;
    if(num != 0)
    {   if(num>0)
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
    num = originalnum;
        do{
            result += (num %10) * pow(10,i-1); 
            i--;
            num *= 0.1 ;

        }
        while( num > 0);
    }else{
        std::cout<<"\nYou enterred 0!";
    }
    std::cout<<result;
}