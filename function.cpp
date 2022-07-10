#include <iostream>
#include "function.h"

using namespace std;
static int global = 1234;

namespace sss{
    void function1(void){
        cout << "function1" << endl;
        cout << global << endl;
    }

    void function2(void){
        function1();
        cout << "function2" << endl;
    }
}
