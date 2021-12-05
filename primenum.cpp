#include<iostream>

bool isPrime(int num)
{   bool prime;
    prime = true;
    for(int i=2;i<num;i++)
    {
        if(num  %i == 0)
        {
            prime=false;
            break;
        }
    }
    return prime;

}
int main()
{
    int x;
    std::cout<<x<<"Enter a valid number : ";
    std::cin>>x;
    if(isPrime(x))
    {
        std::cout<<x<<" is prime!";
    }else{
        std::cout<<x<<" is not prime!";
    }
}
