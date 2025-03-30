// Code_entry.c
#include <stdio.h>
int say_hello(int argc, char **argv){
    if (argc >= 2){
	    printf("Hello %s\n", argv[1]);
    }
    else{
	    printf("Hell oh world!\n");
    }
    return 0;
}

/*
gcc -c Code_entry.c -o hello.o
objcopy --redefine-sym say_hello=main hello.o
gcc hello.o -o hello

gcc -Dsay_hello=main -o hello Code_entry.c 

./hello
./hello 5
*/