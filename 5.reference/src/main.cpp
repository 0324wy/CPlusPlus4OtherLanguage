//
// Created by 王岩 on 2023/5/12.
//
#include <iostream>
#include "term.h"
using namespace std;

void swap2(int &p1, int &p2)
{
    int temp = p1;
    p1 = p2;
    p2 = temp;
}

int& returnInt()
{
    int a = 10;
    return a;
}

int& returnInt2()
{
    static int a = 10;
    return a;
}

void showValue(const int &a)
{
//    a = 10;
    cout << a;
}

int main()
{

    // int * const b = &a;
    int a = 10;
    int c = 20;
    int &b = a;

    // 1.1 reference must be inited
//    int &c;
    // 1.2 reference cannot be change
//    &b = c;
    // 1.3 The reference can only point to heap area or stack area, but not constants
//    int &h = 10; // false
//    const int &h = 10; // true

    // 2.1 reference as function parameters
    swap2(a, c);
    cout << a << endl;
    // 3.1 Don't return local variables' reference
//    int d = returnInt();
//    cout << d << endl;

    // 3.2 If the return value is a reference, the call of function can be left value
    int& f = returnInt2();
    cout << f << endl;
    returnInt2() = 1000;
    cout << f << endl;

    // 4. The essence of reference: pointer const value
//    int* const g = &a;
//    int& g = a;

    // 5. The reference of const value: it is used for formal parameters to prevent be changed


}
