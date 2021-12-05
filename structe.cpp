#include <iostream>
// struct info{
//     std::string username,email,password;
// };
typedef struct {
    std::string username,email,password;
} info;
int main()
//struct to declare object
//create a datatype we use typedef 
{
    info Zenku;
    std::cout<<"Enter username : ";
    std::cin>>Zenku.username;
    std::cout<<"Enter email : ";
    std::cin>>Zenku.email;
    std::cout<<"Enter password : ";
    std::cin>>Zenku.password;
    std::cout<<"Hello "<<Zenku.username<<" ! \nYour email is : "<<Zenku.email<<"\n and Your password is "<<Zenku.password;
}