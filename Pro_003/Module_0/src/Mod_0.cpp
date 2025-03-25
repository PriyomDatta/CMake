#include<iostream>
#include "../inc/Mod_0.hpp"

void indecator(void);

int GetMod0Value(int val){
    indecator();
    if(0>val){
        return -1;
    }
    else if (100<val){
        return -1;
    }
    else{
        char rem = val % 5;
        switch(rem){
            case 0:
                return val+rem;
            case 1:
                return val-rem;
            case 2:
                return val*rem;
            case 3:
                return val/rem;
            case 4:
                return val%rem;
            default:
                return val^rem;
        }
    }
}

void indecator(void){
    std::cout << "\nModule 0 is hit" << std::endl;    
}