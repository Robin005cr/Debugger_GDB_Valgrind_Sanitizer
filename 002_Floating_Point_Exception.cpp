/*
* project   : https://github.com/Robin005cr/Debugger_GDB_Valgrind_Sanitizer
* file name : 002_Floating_Point_Exception.cpp
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
int divide(int x, int y)
{
    return(x/y);
}
int main()
{
   int a = 5;
   float b = 0.5;
   
   int result = divide(a,b);
   cout<<result;
   
    return 0;
}