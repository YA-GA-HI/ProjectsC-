#include <iostream>
int main()
{
    unsigned int f,s;
    char symbol;
    std::cout<<"Enter a desired height : ";
    std::cin>>s;
    std::cout<<"Enter a width  : ";
    std::cin>>f;
    std::cout<<"Enter a desired symbol : ";
    std::cin>>symbol;
    for(int i = 1; i<=s;i++)
    {   for(int j = 1; j<=f;j++)
        {
            if( i==1 || i == s)
            {
                std::cout<<" "<<symbol;
            }
            else if(j==1 || j==f)
            {
                std::cout<<" "<<symbol;
            }else{
                std::cout<<"  ";
            }
        }
        std::cout<<std::endl;
    }
}