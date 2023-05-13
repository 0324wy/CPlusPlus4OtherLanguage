//
// Created by 王岩 on 2023/5/12.
//
#include <iostream>
#include "term.h"
using namespace std;

/**
 * Memory area: code area, global area, stack area, heap area
 * global area: global variables, static variables and global constants
 * stack area: compiler manage this area
 * heap area: coder manage this area. new
 *
 * @return
 */

// global variable: doesn't include in a function
int a = 10;
const int e2 = 50;

int* func1(int a)
{
    return &a;
}

int* func2()
{
    // new is the same as vector
    int *b = new int(10);
    return b;
}

int main()
{
    // 1. global area
    // static variable: static
    // constants: const
    int b = 20;
    static int c = 30;
    const int e = 50;
    cout << &a << endl;
    cout << &b << endl;
    cout << &c << endl;
//    cout << &d << endl;
    cout << &e << endl;
    cout << &e2 << endl;

    // 2. stack area
    // Don't return the address of local variables, because it will be released after the function is executed
//    int *p = func1(3);
//    cout << *p << endl;
//    cout << *p << endl;

    // 3. heap area
    int *p = func2();
    cout << *p << endl;
    delete p;
//    cout << *p << endl;
    int *arr = new int[10];
    delete[] arr;
}
