#include <iostream>
using namespace std;

void overview_example1() {
    cout << "Hello, World!" << endl;
}

void overview_example2() {
    int a = 10;
    cout << "a = " << a << endl;
}

void overview_example3() {
    int num = 5;
    if (num > 0) {
        cout << "Positive number" << endl;
    }
}

void datatype_example1() {
    int age = 20;
    cout << "Age: " << age << endl;
}

void datatype_example2() {
    float height = 172.5;
    cout << "Height: " << height << " cm" << endl;
}

void datatype_example3() {
    char grade = 'A';
    cout << "Grade: " << grade << endl;
}

void operator_example1() {
    int a = 5, b = 3;
    cout << "a + b = " << a + b << endl;
}

void operator_example2() {
    int a = 7, b = 2;
    cout << "a % b = " << a % b << endl;
}

void operator_example3() {
    int x = 10, y = 20;
    cout << "Is x < y? " << (x < y) << endl;
}

int main() {
    overview_example1();
    overview_example2();
    overview_example3();

    datatype_example1();
    datatype_example2();
    datatype_example3();

    operator_example1();
    operator_example2();
    operator_example3();

    return 0;
}

