#include<iostream>

using namespace std;

int main()
{
   int a;
   cin>>a;
    int arr[a];
    for(int i=0; i<5; i++)
    {

        cin>>arr[i];
    }
    cout<<"{ ";
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<", ";
    }
    cout<<"}";
}
