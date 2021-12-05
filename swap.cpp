#include <iostream>
//create generics data type
    template<typename T1>
    void swap(T1& a , T1& b)
    {
        T1 temp = a;
        a = b;
        b = temp;
    }
int main()
{
    int a = 5 , b = 8;
    swap(a,b);
    std::cout<<a <<"    "<<  b<<std::endl;
    char w = 'h' , q = 'c';
    swap(w,q);
    std::cout<<w <<"    "<<  q;

}