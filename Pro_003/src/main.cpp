#include <iostream>
#include "../build/Version.h"
#include "../Module_0/inc/Mod_0.hpp"

int main() {
    std::cout << "Project major version is :- " << PROJECT_VERSION_MAJOR<<" .";
    std::cout << "\nProject minor version is :- " << PROJECT_VERSION_MINOR<<" .";
    std::cout << "\nHello, World!" << std::endl;
    std::cout <<"\n"<<GetMod0Value(5)<<std::endl;
    std::cout <<"\nExecution ended"<<std::endl;
    return 0;
}