#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int arr1_length,arr2_length;
    cout<<"Enter First Array Length: ";
    cin>>arr1_length;
    cout<<"\n\nEnter Second Array Length: ";
    cin>>arr2_length;
    int arr1[arr1_length],arr2[arr2_length];
    cout<<"Enter The First Array Elements :\n";
    int final_length=arr1_length+arr2_length;
    int merging_arr[final_length];

    for(int i=0; i<arr1_length; i++)
    {
       cin>>arr1[i];
       merging_arr[i]=arr1[i];
    }
    cout<<"Enter The Second Array Elements :\n";

    for(int i=0; i<arr2_length; i++)
    {
       cin>>arr2[i];
       merging_arr[arr1_length+i]=arr2[i];
    }
    cout<<"The Merging Array's Elements are: ";

    for(int i=0; i<final_length; i++)
    {
        cout<<setw(5)<<merging_arr[i];
    }
}

