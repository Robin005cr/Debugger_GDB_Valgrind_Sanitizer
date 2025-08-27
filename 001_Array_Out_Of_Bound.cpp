/*
* project   : https://github.com/Robin005cr/Debugger_GDB_Valgrind_Sanitizer
* file name : 001_Array_Out_Of_Bound.cpp
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
#include <vector> 
using namespace std;
int main()
{
    int arr[5] = {56,67,88,98,87};
    for(int i=0;i<=5;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    vector<int> myVec = {1,2,5,6};
    cout<<myVec[6];

    return 0;
}