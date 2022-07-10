#include <iostream>
#include "function.h"

using namespace std;

void function1(void){
    cout << "function1" << endl;
}

void function2(void){
    function1();
    cout << "function2" << endl;
}

