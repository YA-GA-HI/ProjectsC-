#include <iostream>
class me{
    public:
        me(std::string first)
        {
            firstName = first;
        }
        std::string getFisrtName()
        {
            return firstName;
        }
    private:
        std::string firstName,secondName,age,experience;
        
        
};
int main()
{
    me zenku("Zakariaa");
    // zenku.firstName = "Zakariaa";
    std::cout<<zenku.getFisrtName();

    // for(int i : {1,2,3,4,5,6})
    // {
    //     std::cout<<i<<std::endl;
    // }
}