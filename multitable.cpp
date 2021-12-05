#include <iostream>
int main()
{
    for(int i = 1;i<10;i++)
    {
        for(int j = 1;j<10;j++)
        {
            int h = i * j;
            std::cout<<" "<<i<<" "<<"x"<<" "<<j<<" "<<"="<<" "<<h<<" "<<"|";
            {
            }
        }
        std::cout<<std::endl;
            if(i == 9)
            {
                std::cout<<"__________";
            }
        
        
    }
}