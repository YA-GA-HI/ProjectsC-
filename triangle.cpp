#include <iostream>
int main()
{
    unsigned int f,s,counter;
    char symbol;
    std::cout<<"Enter data to draw a rectangle triangle : ";
    std::cout<<"Enter a desired shape  : ";
    std::cin>>f;
    // std::cout<<"Enter a desired shape 2 : ";
    // std::cin>>s;
    std::cout<<"Enter a desired symbol : ";
    std::cin>>symbol;
    counter = s;
    for(int i = 0; i<=f;i++)
    {   for(int j = 0; j<=i;j++)
        {
        std::cout<<" "<<symbol;
        }
        std::cout<<std::endl;
    }
}