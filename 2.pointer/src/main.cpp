
#include <iostream>
using namespace std;

/**
 * 1. p在64位系统是8字节；34：4
 * 2. *p解引用
 * @return
 */

void swap1(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void swap2(int &p1, int &p2)
{
    int temp = p1;
    p1 = p2;
    p2 = temp;
}

void swap3(int p1, int p2)
{
    int temp = p1;
    p1 = p2;
    p2 = temp;
}

void bubbleSort(int *p, int len)
{
    for (int i = 0; i < len - 1; ++i) {
        for (int j = 0; j < len - 1- i; ++j) {
            if (p[j] > p[j + 1]) {
                // swap3(p[j], p[j + 1]);
                // Using a function is different from swapping in place, because the formal parameters of swap3 is a
                // copy of practical parameters
                int temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

int main() {
    // 1. the size of pointer
    int a = 10;
    int *p = &a;
    *p = 5;

    cout << "p: " << sizeof(p) << "\n";
    cout << "*p: " << sizeof(*p) << endl;
    cout << "a: " << a << endl;

//    // 2. null pointer uses for initialization, but can't be referenced
//    int *p1 = NULL;
//    cout << *p1 << endl;
//    *p1 = 100;
//    cout << *p1 << endl;
//
//    // 3. wild pointer, pointer to an illegal memory, and can't be referenced
//    int *p2 = (int *) 0x1100;
//    cout << *p2 << endl;

    // 4. The pointer can be changed, but the value pointed to by the pointer cannot be changed
    int b = 10;
    int c = 20;
    const int *p3 = &b;
//    *p3 = 30;
    b = 30;
    p3 = &c;
    cout << *p3 << endl;

    // 5. The pointer cannot be changed, but the value pointed to by the pointer can be changed
    int * const p4 = &b;
//    p4 = &c;
    *p4 = 30;

    const int * const p5 = &b;
//    p5 = &c;
//    *p5 = 30;

    // 6. pointer and vector
    int arr[3] = {1, 2, 3};
    cout << arr[0] << endl;
    int *p6 = arr;
    cout <<  *p6 << endl;
    p6++;
    cout <<  *p6 << endl;

    int *p7 = arr;
    for (int i = 0; i < 3; ++i) {
//        cout << arr[i] << endl;
        cout << *(p7 + i) << endl;
        // cout << p7[i] << endl; is also right
    }

    // 7. pointer and function
    // If we don't use the pointer, the formal parameters is a copy of practical parameters
    int d = 10;
    int e = 20;
    swap1(&d, &e);
    cout << "d: " << d << "\ne: " << e << endl;
    swap2(d, e);
    cout << "d: " << d << "\ne: " << e << endl;

    // 8. pointer, function and vector
    int arr2[5] = {3, 2, 4, 1, 5};
    int len = sizeof(arr2) / sizeof(arr2[0]);
    bubbleSort(arr2, len);
    for (int i = 0; i < 5; ++i) {
        cout << arr2[i] << endl;
    }

    return 0;

}

