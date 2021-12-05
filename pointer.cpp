#include <iostream>
int main()
{
    //pointer stores a memory location
    float n = 5;
    std::cout<<&n<<std::endl;
    //we use & to getphysical adress of var

    //create a pointer
    float* ptr = &n;
    std::cout<<ptr<<std::endl;
    //get data from pointer
    std::cout<<*ptr<<std::endl;
    //change value from var by pointer 
    *ptr = 8;
    std::cout<<*ptr<<std::endl;

    //pointer val and his data should have same data type
}