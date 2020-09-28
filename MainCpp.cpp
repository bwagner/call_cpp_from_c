// taken https://www.teddy.ch/c++_library_in_c/
#include "Class.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
        Class *c = new Class();
        c->setI(42);
        cout << "calling Cpp from Cpp: " << c->getI() << endl;
        delete c;
}
