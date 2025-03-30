Only for note:-
The following is a little bit complicated project becase the purpose is also complicated

1. ./build_proj.sh
2. ./build/mainexe
3. ./build/testexe

Explanation:- 
1. It triggers shell script named build_proj.sh, the shell script does all the build process The folling was necessary cz was exploring CI(Continious Integration) and there had to add all the commands instead it was better to implement.
2. To run mainexecutable
3. To run the testexecutable

Related to CMake:-
1. configure_file() is used to configuration a file
2. include_directories() is used to add the include directories
3. file() To create collection of files
4. add_executable() To create executable
