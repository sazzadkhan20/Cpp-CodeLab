#include<iostream>

using namespace std;

int main()
{
    int length_of_array,temp_element;
    cout<<"Enter the Array Length: ";
    cin>>length_of_array;
    int arr[length_of_array];

    if(length_of_array%2!=0)
    {
      cout<<"\n\nArray Elements should be Even \n\n";
      return 0;
    }

    cout<<"\n\nEnter The Array Elements: \n\n";

    for(int i=0; i<length_of_array; i++)
    {
       cin>>arr[i];
    }

    for(int i=0; i<length_of_array; i+=2)
    {
        temp_element = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp_element;
    }

    cout<<"\n\nThe Array Elements are: ";

    for(int i=0; i<length_of_array; i++)
    {
       cout<<arr[i]<<"   ";
    }
}
