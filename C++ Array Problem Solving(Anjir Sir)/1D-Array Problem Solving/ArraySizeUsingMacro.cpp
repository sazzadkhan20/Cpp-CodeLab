#include<iostream>
#define array_size(arr) (sizeof arr/sizeof arr[0])

using namespace std;

int main()
{
    int lengthOfArray;
    cout<<"\n\nEnter Array Length: ";
    cin>>lengthOfArray;
    int arr[lengthOfArray];
    cout<<"\n\nEnter Array Elements: \n\n";

    for(int i=0; i<lengthOfArray; i++)
    {
        cin>>arr[i];
    }
    cout<<"\n\nArray Size is: "<<array_size(arr);
}
