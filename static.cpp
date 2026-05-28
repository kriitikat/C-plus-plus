#include<iostream>
int generateID()
{
    static int s_id {0};
    return ++s_id;
}
int main()
{
    std::cout<< generateID() << std::endl;
    std::cout<< generateID() << std::endl;
    std::cout<< generateID() << std::endl;
}
