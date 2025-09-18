Only for note:-

It is cary over from Pro_002 but removed shell script as there is no CI
And target was to achieve seperate builds for test and executable

1. mkdir build
2. cd build
3. cmake ..
4. cmake --build . --target mainexe
5. cmake --build . --target testexe
6. ./tests/testexe
7. ./bin/mainexe

Commands are self explanetory

Regrding CMake:-
set_target_properties()   --tearget dependent