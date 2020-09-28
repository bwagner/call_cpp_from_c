// taken https://www.teddy.ch/c++_library_in_c/
#include "ClassWrapperForC.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
        struct Class* c = newClass();
        Class_setI(c, 42);
        printf("calling Cpp from C: %i\n", Class_getI(c));
        deleteClass(c);
}
