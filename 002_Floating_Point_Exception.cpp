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