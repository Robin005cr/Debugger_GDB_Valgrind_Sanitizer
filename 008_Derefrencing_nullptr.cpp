/*
* project   : https://github.com/Robin005cr/Debugger_GDB_Valgrind_Sanitizer
* file name : 008_Derefrencing_nullptr.cpp
* author    : Robin CR
* mail id   : robinchovallurraju@gmail.com
* LinkedIn  : https://www.linkedin.com/in/robin-cr/
* portfolio : https://robin005cr.github.io/
*
* Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
* Suggestions for improvements or better methods are always welcome and appreciated.
* I value constructive feedback and aim to continuously improve the quality of the work.
*
*/
#include <iostream>
using namespace std;
class MyClass {
private:
    int data;

public:
    MyClass(int value) : data(value) {
        cout << "Constructor called, data = " << data << endl;
    }

    ~MyClass() {
        cout << "Destructor called, data = " << data << endl;
    }

    void display() const {
        cout << "Data: " << data << std::endl;
    }

};
int main() {
    
    MyClass* ptr = new MyClass(20);  // Dynamically allocating an object

    ptr->display();       // Access the object's member using the pointer
    delete ptr;
    ptr->display();
    return 0;
}
