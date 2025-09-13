/*
* project   : https://github.com/Robin005cr/Debugger_GDB_Valgrind_Sanitizer
* file name : 010_Missing_check_nullptr.cpp
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
class Animal
{
    public : 
        string name;
        virtual void movement()
        {
            cout<<"Running"<<endl;
        }
};
class oldFamily : public Animal
{
    public:
        void movement() override
        {
            cout<<"Walking"<<endl;
        }
};
int main()
{
    
    oldFamily monkeyOld;
    Animal *monkey = &monkeyOld;
    
    monkey->movement();
    monkey = nullptr;
    monkey->movement();

    
    return 0;
}