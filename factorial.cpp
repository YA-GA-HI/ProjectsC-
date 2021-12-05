#include <iostream>
int main()
{
    unsigned int num , factoriel = 0 ;
    std::cout<<"enter a valid number : ";
    std::cin>>num;
    //factoriel = num*(num+1)/2 ;
    for(int i = 1 ; i<=num;i++)
    {
        factoriel +=i ;
    }
    std::cout<<num<<"!="<<factoriel;
}