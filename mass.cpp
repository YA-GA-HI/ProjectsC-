#include <iostream>
int main()
{

    float weight , height , mass ;

    std::cout<<"Enter Your Weight with Kg : ";
    std::cin>> weight ;
    std::cout<<"Enter Your Height with m :";
    std::cin>> height ;  
    mass = weight /(height * height );
    if(weight>0 && height>0)
        if(mass < 18.5)
            std::cout<<"\nYou should take care about your health! You are Underweight";
        else if(mass>= 18.5 && mass < 25)
            std::cout<<"\nYou have a normal weight";
        else
            std::cout<<"\nYou should take care about your health! You are Overweight";        
    else
        std::cout<<"\nYou entered a false values";
}