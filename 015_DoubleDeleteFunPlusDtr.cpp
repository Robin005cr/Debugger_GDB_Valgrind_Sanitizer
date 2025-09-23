/*
* project   : https://github.com/Robin005cr/Debugger_GDB_Valgrind_Sanitizer
* file name : 015_DoubleDeleteFunPlusDtr.cpp
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
#include<iostream>
using namespace std;
class Engine
{
public:
	void stop() {
		cout << "Engine stopped.\n";
	}

};
class Car {
	Engine* engine;
public:
	Car(Engine* e) : engine(e) {}
	void dismantle() {
	    cout<<"Deleted from function"<<endl;
		delete engine;    // deletes engine
	}
	~Car() {
	    cout<<"Deleted from destructor"<<endl;
		delete engine;    // deletes again
	}
};
int main()
{
	Engine *e;
	Car myCar(e);
	myCar.dismantle();
}