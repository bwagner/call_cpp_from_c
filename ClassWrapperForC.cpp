// taken https://www.teddy.ch/c++_library_in_c/
#include "Class.h"
#include "ClassWrapperForC.h"

extern "C" {
        Class* newClass() {
                return new Class();
        }

        void Class_setI(Class* v, int theI) {
                v->setI(theI);
        }

        int Class_getI(Class* v) {
                return v->getI();
        }

        void deleteClass(Class* v) {
                delete v;
        }
}
