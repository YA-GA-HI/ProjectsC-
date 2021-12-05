#include <iostream>

int main()
{
    float annualSalary,mounthlySalary;
    std::cout << "enter your annualy salary: ";
    std::cin >>  annualSalary;
    mounthlySalary = annualSalary/12;
    std::cout << "\nYour monthly Salay is : " << mounthlySalary;
}