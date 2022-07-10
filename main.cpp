#include <iostream>
#include "brass.h"

void test();

int main() {
    using std::cout;
    using std::endl;
    for(int i = 0 ; i < 10 ; i++){
            test();
    }


    return 0;
}

void test(){
    using std::cout;
    using std::endl;
    static int num = 0;
    num++;
    cout << num << endl;

}
