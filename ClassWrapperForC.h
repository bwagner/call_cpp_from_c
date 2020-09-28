// taken https://www.teddy.ch/c++_library_in_c/
#ifndef __CLASS_WRAPPER_FOR_C_H
#define __CLASS_WRAPPER_FOR_C_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Class Class;

Class* newClass();

void Class_setI(Class* v, int theI);

int Class_getI(Class* v);

void deleteClass(Class* v);

#ifdef __cplusplus
}
#endif
#endif
