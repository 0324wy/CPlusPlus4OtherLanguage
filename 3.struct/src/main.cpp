//
// Created by 王岩 on 2023/5/12.
//
#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;
}s3;

void changeStudent(Student stu)
{
    stu.age = 100;
}

void changeStudent2(Student *stu)
{
    stu->age = 100;
}

int main()
{
    // 1. struct definition
    // The fields in struct are public
    // 1.1
    Student s1;
    s1.name = "s1";
    s1.age = 12;
    cout << s1.name << s1.age << endl;
    // 1.2
    Student s2 = {"s2", 13};
    cout << s2.name << s2.age << endl;
    // 1.3 {}s3
    s3.name = "s3";
    s3.age = 14;
    cout << s3.name << s3.age << endl;

    // 2. struct vector
    Student stu[3] = {s1, s2, s3};
    for (int i = 0; i < 3; ++i) {
        cout << stu[i].name << endl;
    }

    // 3. struct and pointer
    Student *p = &s3;
    cout << p->age << endl;

    // 4. struct and function
    // struct is the same as int but different from vector
    changeStudent(s1);
    cout << s1.age << endl;
    changeStudent2(&s1);
    cout << s1.age << endl;

}
