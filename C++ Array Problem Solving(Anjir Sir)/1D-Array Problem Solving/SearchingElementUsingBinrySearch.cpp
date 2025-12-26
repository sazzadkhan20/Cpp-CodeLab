#include<iostream>

using namespace std;

int main()
{
    int length_of_array;
    cout<<"Enter the Array Length: ";
    cin>>length_of_array;
    cout<<"\n\nEnter the Array Elements: \n\n";
    int arr[length_of_array];
    int searching_element;
    int temp_element,counter;
    bool flag = false;
    int searching_element_index_number;

    for(int i=0; i<length_of_array; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<length_of_array; i++)
    {
        temp_element = arr[i];
        counter = i;
        for(int j=i; j<length_of_array; j++)
        {
            if(temp_element>arr[j])
            {
               temp_element = arr[j];
               counter = j;
            }
        }
        arr[counter] = arr[i];
        arr[i] = temp_element;
    }
    cout<<"\n\nThe Sorting Array is: ";
    for(int i=0; i<length_of_array; i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"\n\nEnter The Searching Element: ";
    cin>>searching_element;
    int left = 0;
    int right = length_of_array-1;
    int mid;
    /*while(left!=right)
    {
        mid = (left + right)/2;
        cout<<"Testing"<<endl;

        if(arr[mid]==searching_element)
        {
            flag = true;
            searching_element_index_number = mid;
            break;
        }
        else if(arr[left]==searching_element)
        {
            flag = true;
            searching_element_index_number = left;
            break;
        }
        else if(arr[right]==searching_element)
        {
            flag = true;
            searching_element_index_number = right;
            break;
        }
        else if(arr[mid]<searching_element)
        {
            left = mid+1;
        }
        else if(arr[mid]>searching_element)
        {
            right = mid-1;
        }
    }*/

    while(left<=right)
    {
        cout<<"testing\n";
        mid = (left + right)/2;
        if(arr[mid]==searching_element)
        {
           flag = true;
           searching_element_index_number = mid;
            //break;
        }
        if(arr[mid]<searching_element)
        {
            left = mid +1;
        }
        else
        {
            right = mid -1;
        }
    }
    if(flag)
    {
      cout<<"\n\nSearching Element "<<searching_element<<" Found and Index Number: "<<searching_element_index_number<<"\n\n";
    }
    else
    {
        cout<<"\n\nSearching Element "<<searching_element<<" Not Found \n\n";
    }
}
