#include <iostream>
#include "../build/Version.h"
#include "../Module_0/inc/Mod_0.hpp"

int main() {
    std::cout << "Project major version is :- " << PROJECT_VERSION_MAJOR<<" .";
    std::cout << "\nProject minor version is :- " << PROJECT_VERSION_MINOR<<" .";
    std::cout << "\nHello, World!";
    std::cout<<GetMod0Value(5);
    std::cout<<GetMod0Value(6);
    std::cout<<GetMod0Value(7);
    std::cout<<GetMod0Value(8);
    std::cout<<GetMod0Value(9);
    std::cout<<GetMod0Value(10);
    std::cout<<GetMod0Value(11)
    std::cout <<"\nExecution ended"<<std::endl;
    return 0;
}