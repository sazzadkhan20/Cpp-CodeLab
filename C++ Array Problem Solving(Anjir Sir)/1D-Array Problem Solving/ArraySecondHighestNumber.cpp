#include<iostream>

using namespace std;

int main()
{
    int lengthof_array;
    cout<<"Enter the Length of Array: ";
    cin>>lengthof_array;
    int arr[lengthof_array];
    int temp_arr_element1,temp_arr_element2;
    bool flag = false;
    cout<<"\n\nInput The Array Elements: \n\n";

    for(int i=0; i<lengthof_array; i++)
    {
        cin>>arr[i];
    }
    if(arr[0]>arr[1])
    {
        temp_arr_element1 = arr[0];
        temp_arr_element2 = arr[1];
    }
    else if(arr[0]<arr[1])
    {
        temp_arr_element1 = arr[1];
        temp_arr_element2 = arr[0];
    }
    else
    {
        temp_arr_element1 = arr[0];
        temp_arr_element2 = arr[0];
        for(int i=0; i<lengthof_array; i++)
        {
            if(temp_arr_element1<arr[i])
            {
                temp_arr_element1 = arr[i];
                break;
            }
            else if(temp_arr_element1>arr[i])
            {
                temp_arr_element2 = arr[i];
                break;
            }
        }
    }

    for(int i=0; i<lengthof_array; i++)
    {
        if(temp_arr_element1<arr[i])
        {
            temp_arr_element2 = temp_arr_element1;
            temp_arr_element1 = arr[i];
        }

        else if(temp_arr_element2<arr[i] && temp_arr_element1!=arr[i])
        {
            temp_arr_element2 = arr[i];
        }
    }

    cout<<"\n\nThe Largest Element of the Array is: "<<temp_arr_element1;
    cout<<"\n\nThe Second Largest Element of the Array is: "<<temp_arr_element2<<"\n\n";

}
