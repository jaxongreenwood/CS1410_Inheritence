#include <iostream>
#include "Counter.h"
using namespace std;

int main() {

    Counter c1, c2(99);
    CountDn c3, c4(50);

    cout << "c1 count is " << c1.getCount() << endl;
    ++c2;
    cout << "c2 count is " << c2.getCount() << endl;
    ++c3;
    ++c3;
    --c3;
    cout << "c3 count is " << c3.getCount() << endl;
    cout << "c4 count is " << c4.getCount() << endl;

    return 0;
}