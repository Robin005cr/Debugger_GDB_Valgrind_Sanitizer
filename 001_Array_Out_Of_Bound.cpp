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