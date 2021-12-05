#include <iostream>
int main()
{
    float a ,b, result;
    char o;
    std::cout<<"/*------------------\n\n Zenku Calculator\n\n------------------*/\n Enter a valide equation:\n";
    std::cin>>a>>o>>b;
    switch (o)
    {
    case 'x':
        result = a* b ;
        std::cout<<a<<o<<b<<'='<<result;
        break;
    case '*':
        result = a* b ;
        std::cout<<a<<o<<b<<'='<<result;
        break;
    case '-':
        result = a-b ;
        std::cout<<a<<o<<b<<'='<<result;
        break;
    case '+':
        result = a+ b ;
        std::cout<<a<<o<<b<<'='<<result;
        break;
    case '/':
    result = a/ b ;
        std::cout<<a<<o<<b<<'='<<result;
        break;
    case '%':
    result = (int) a % (int) b ;
        std::cout<<a<<o<<b<<'='<<result;
        break;
    default:
    std::cout<<"You didn't enterred a valid equation! Please try again";
        break;
    }

}

//switch case or for