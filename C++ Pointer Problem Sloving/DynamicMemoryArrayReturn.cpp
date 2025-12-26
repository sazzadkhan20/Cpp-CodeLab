#include<iostream>

using namespace std;

int * func()
{
    int *arr = new int[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    return arr;
}

int main()
{
    int *arr = func();
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<"  ";
    }
    delete [] arr;//Deallocation process
}
