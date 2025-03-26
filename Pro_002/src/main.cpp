#include <iostream>
#include "../build/Versionconfig.h"
#include"../inc/Mod_1.hpp"

int main() {
    std::cout << "Project major version is :- " << PROJECT_VERSION_MAJOR<<" .";
    std::cout << "\nProject minor version is :- " << PROJECT_VERSION_MINOR<<" .";
    std::cout << "\nHello, World!" << std::endl;
    fun1(1);
    std::cout << "\nFirst function called\nNow check calculator:";
    std::cout << "\nResult of 5+5 is :"<<fun2(5,5,'+');
    std::cout << "\nResult of 5-5 is :"<<fun2(5,5,'-');
    std::cout << "\nResult of 5*5 is :"<<fun2(5,5,'*');
    std::cout << "\nResult of 5/5 is :"<<fun2(5,5,'/');
    return 0;
}