#include <iostream>
//library help us to input and output data
    int addition1(int n)
{
    int result ;
    result =  n*(n+1)/2 ;
    //print result
   return   result;
} 

    int addition2(int n)
{   int i = 0;
    int result ;
    for(i=0;i<=n;i++)
    {
    result +=  i ;
    }
    //print result
   return   result;
} 

int main()
{  
    float x = 6.77 ;
    std::cout << x <<std::endl ;
    std::cout << addition1(9);
    //output somehing
    return 0 ;
}

