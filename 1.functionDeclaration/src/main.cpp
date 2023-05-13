#include "swap.h"

/**
 * 1. function must be declared before it is called
 * 2. The function could be declared in the .h file, and it can be
 * 3. Including .h file means copying all the text in the .h file
 * @return
 */

int main() {

    int a = 10;
    int b = 20;
    swap(a, b);

    cout << "a: " << a << "\n";
    cout << "b: " << b << endl;

    return 0;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "a: " << a << "\n";
    cout << "b: " << b << endl;
}
