/*
* project   : https://github.com/Robin005cr/Debugger_GDB_Valgrind_Sanitizer
* file name : 014_DoublePtrTwoOwner.cpp
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
class Engine
{
public:
    void stop() { std::cout << "Engine stopped.\n"; }
    ~Engine() { std::cout << "Engine destroyed.\n"; }
};

class Car
{
public:
    Car(Engine *e) : engine(e) {}
  ~Car(){
      delete engine;    
  }

private:
    Engine *engine;
};

class Jeep
{
public:
    Jeep(Engine *e) : engine(e) {}
  ~Jeep(){
      delete engine;    
  }

private:
    Engine *engine;
};
int main()
{
    Engine *e = new Engine();
    Car myCar(e);
    Jeep myJeep(e);
}