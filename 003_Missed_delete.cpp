#include <iostream>
using namespace std;

int main() 
{
    int a = 10;
    int *ptr = new int;  // Allocate memory for an integer
    *ptr = a;            // Assign the value of a to the allocated memory

    cout << "Value at ptr: " << *ptr << endl;
    

    return 0;
}