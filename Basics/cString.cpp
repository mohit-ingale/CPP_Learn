#include <iostream>

int main()
{
    char name[10];
    std::cout << "Enter you name" << std::endl;
    //std::cin >> name; //If we enter space it will terminate
    std::cin.get(name,10);
    std::cout << "Name is " << name << std::endl;
}