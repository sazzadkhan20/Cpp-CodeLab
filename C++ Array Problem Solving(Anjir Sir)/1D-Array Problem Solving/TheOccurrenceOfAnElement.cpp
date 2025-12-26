#include<iostream>

using namespace std;

int main()
{
    int length_of_array,temp_element,counter=0;
    cout<<"Enter the Array Length: ";
    cin>>length_of_array;
    int arr[length_of_array];
    cout<<"\n\nEnter The Array Elements: \n\n";

    for(int i=0; i<length_of_array; i++)
    {
       cin>>arr[i];
    }
    cout<<"\n\nEnter A Element that you want to know the Occurrance of that Element: ";
    cin>>temp_element;

    for(int i=0; i<length_of_array; i++)
    {
        if(arr[i]==temp_element)
        {
            counter++;
        }
    }
    cout<<"\n\nTotal Occurrance of that Element "<<temp_element<<" is : "<<counter<<"\n\n";
}
