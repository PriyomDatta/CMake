#include <iostream>
#include "../build/Version.h"
#include ""

int main() {
    std::cout << "Project major version is :- " << PROJECT_VERSION_MAJOR<<" .";
    std::cout << "\nProject minor version is :- " << PROJECT_VERSION_MINOR<<" .";
    std::cout << "\nHello, World!" << std::endl;
    return 0;
}