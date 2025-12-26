#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int length_of_array;
    cout<<"Enter The Array Length: ";
    cin>>length_of_array;
    cout<<"\n\nEnter The Array Elements: \n\n";
    int arr[length_of_array];
    int temp_array_element,temp_array_element_index_number;
    for(int i=0; i<length_of_array; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<length_of_array; i++)
    {
        temp_array_element = arr[i];
        temp_array_element_index_number = i;
        for(int j=i; j<length_of_array; j++)
        {
           if(temp_array_element<arr[j])
           {
               temp_array_element = arr[j];
               temp_array_element_index_number = j;
           }
        }
        arr[temp_array_element_index_number] = arr[i];
        arr[i] = temp_array_element;
    }

    cout<<"\n\nThe Desending Order Array Elements are: ";

    for(int i=0; i<length_of_array; i++)
    {
        cout<<setw(5)<<arr[i];
    }
}
