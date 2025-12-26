#include<iostream>

using namespace std;

int main()
{
    int length;
    cout<<"Enter the Length of The Array: ";
    cin>>length;
    int arr[length];
    cout<<"\n\nEnter the Elements of the Array: \n";

    for(int i=0; i<length; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n\nMedian of the Array is: "<<arr[length/2]<<"\n\n";
}
