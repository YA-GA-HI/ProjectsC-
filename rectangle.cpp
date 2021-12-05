#include <iostream>
int main()
{
    unsigned int height , width;
    char symbol;
    std::cout<<"Enter a desired height : ";
    std::cin>>height;
    std::cout<<"Enter a desired width : ";
    std::cin>>width;
    std::cout<<"Enter a desired symobol : ";
    std::cin>>symbol;
    for(int i = 0; i<height;i++)
    {
        for(int j = 0; j<width;j++)
        {
            std::cout<<" "<<symbol;
        }
        std::cout<<std::endl;
    }
}