#include <iostream>
#define test = 200;
class abstractUser{
    //make it obligaotry
    //force developers to use it 
    virtual void AskAboutPromotion()=0;
};

//class
class User:abstractUser{
private:
    std::string firstName, secondName;
    int age;
public:
    User(std::string newFirstName,std::string newSecondName,int newAge)
    {
        firstName = newFirstName;
        secondName = newSecondName;
        age = newAge;
        std::cout<<"hello "<<firstName<<" "<<secondName<<std::endl;
    }

    void AskAboutPromotion(){
        age%2 == 0 ? std::cout<< "there is promotion" : std::cout<< "there is o promotion"  ;
    }

    void firstNameSet(std::string newFirstName)
    {
        firstName = newFirstName;
    }

    std::string firstNameGet()
    {
        return firstName;
    }
};

//employee

class Employee:public User{
    std::string permission;
    public:
    Employee(std::string newPermission,std::string newFirstName,std::string newSecondName,int newAge):User(newFirstName,newSecondName,newAge)
    {
        permission = newPermission;
    }
};

//developer
class Developer:public Employee{
private:
    std::string salary;
public:
    Developer(std::string newSalary,std::string newPermission,std::string newFirstName,std::string newSecondName,int newAge)
    :Employee(newPermission,newFirstName,newSecondName,newAge)
    {
        salary = newSalary;
        std::cout<<"Your Price is "<<salary<<std::endl;
    }
};



int main()
{
    Developer zenku = Developer("10000$","developper","zakariaa","enajjachi",21);
    zenku.firstNameSet("zenku");
    std::cout<<zenku.firstNameGet()<<std::endl;
    zenku.AskAboutPromotion();
    std::cout<<"tes\"t"<<std::endl;
    
}