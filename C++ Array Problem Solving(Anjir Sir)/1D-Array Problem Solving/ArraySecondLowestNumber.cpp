#include<iostream>

using namespace std;

int main()
{
    int lengthof_array;
    cout<<"Enter The Array Length: ";
    cin>>lengthof_array;
    cout<<"\n\nPlease Enter the array Elements: \n\n";
    int arr[lengthof_array];
    int temp_first_lowest_element,temp_second_lowest_element;

    for(int i=0; i<lengthof_array; i++)
    {
        cin>>arr[i];
    }
    if(arr[0]<arr[1])
    {
        temp_first_lowest_element = arr[0];
        temp_second_lowest_element = arr[1];
    }
    else if(arr[0]>arr[1])
    {
        temp_first_lowest_element = arr[1];
        temp_second_lowest_element = arr[0];
    }
    else
    {
        temp_first_lowest_element = arr[0];
        temp_second_lowest_element = arr[0];

        for(int i=0; i<lengthof_array; i++)
        {
            if(temp_first_lowest_element>arr[i])
            {
               temp_first_lowest_element = arr[i];
               break;
            }
            else if(temp_first_lowest_element<arr[i])
            {
                temp_second_lowest_element = arr[i];
                break;
            }
        }
    }

    for(int i=0; i<lengthof_array; i++)
    {
        if(temp_first_lowest_element>arr[i])
        {
            temp_second_lowest_element = temp_first_lowest_element;
            temp_first_lowest_element = arr[i];
        }
        else if(temp_second_lowest_element>arr[i] && temp_first_lowest_element!=arr[i])
        {
            temp_second_lowest_element = arr[i];
        }
    }

    cout<<"\n\nThe Lowest Element of the Array is: "<<temp_first_lowest_element;
    cout<<"\n\nThe Second Lowest Element of the Array is: "<<temp_second_lowest_element<<"\n\n";
}
