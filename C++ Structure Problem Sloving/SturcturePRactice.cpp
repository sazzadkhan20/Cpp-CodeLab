#include<iostream>
using namespace std;

struct MyStruct {
    int x;
    int y;
};

int main() {
    MyStruct obj;
    obj.x = 42;
    obj.y = 10;

    MyStruct* ptr = &obj;

    (*ptr).x = 120;
    ptr->y = 150;
    // Using the -> operator to access members through a pointer
    cout << "x through pointer: " << obj.x << endl;
    cout << "y through pointer: " << obj.y << endl;

    return 0;
}
