#include <iostream>
#include <string>

int main()
{
    std::string name("HelloSkillbox!");

    std::cout << name << "\n" << "\n";
    std::cout << "string lenght: " << name.length() << "\n";
    std::cout << "first symbol: " << name[0] << "\n";
    std::cout << "last symbol: " << name[name.size() - 1] <<"\n";

    return 0;
}
