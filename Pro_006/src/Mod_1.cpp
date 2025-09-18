#include <iostream>
#include"../inc/Mod_1.hpp"

void fun1(int a){
    std::cout << "\nfun1 was called and passed value is :"<< a;
}

int fun2(int a, int b,char c){
    switch (c)
    {
    case '+':
        return a+b;
        break;
    case '-':
        return a-b;
        break;
    case '*':
        return a*b;
        break;
    case '/':
        return a/b;
        break;
    default:
        return 0;
        break;
    }
}