#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int lengthof_array;
    cout<<"Enter the length of the Array: ";
    cin>>lengthof_array;
    int arr[lengthof_array];
    int tempElement;
    cout<<"\n\nPlease Enter the Elements of the Array: \n\n";

    for(int i=0; i<lengthof_array; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<lengthof_array; i++)
    {
       for(int j=i; j>0; j--)
       {
           if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
           else
            break;
       }
    }
    cout<<"\n\nThe Sorting Array is: ";
    for(int i=0; i<lengthof_array; i++)
    {
        cout<<setw(5)<<arr[i];
    }
    cout<<"\n\n";
}
