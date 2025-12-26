#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int length_of_array;
    cout<<"\nEnter Array Length: ";
    cin>>length_of_array;
    cout<<"\n\nEnter Array Elements: \n\n";
    int arr[length_of_array];
    int deleting_element,deleting_element_index_number;
    int left = 0,right = length_of_array-1;
    int mid;

    for(int i=0; i<length_of_array; i++)
    {
        cin>>arr[i];
    }
    int temp_element;
    int temp_element_index_number;

    for(int i=0; i<length_of_array; i++)
    {
      temp_element = arr[i];
      temp_element_index_number = i;
      for(int j=i; j<length_of_array; j++)
      {
         if(temp_element>arr[j])
         {
             temp_element = arr[j];
             temp_element_index_number = j;
         }
      }
      arr[temp_element_index_number] = arr[i];
      arr[i] = temp_element;
    }

    cout<<"\n\nArray Elements are: ";

    for(int i=0; i<length_of_array; i++)
    {
        cout<<setw(5)<<arr[i];
    }
    cout<<"\n\nEnter A Deleting Element: ";
    cin>>deleting_element;

    while(left<=right)
    {
        mid = (left+right)/2;
        if(arr[mid]==deleting_element)
        {
           deleting_element_index_number = mid;
           break;
        }
        if(arr[mid]>deleting_element)
        {
            right = mid -1;
        }
        else
        {
            left = mid +1;
        }
    }

    for(int i=0; i<length_of_array; i++)
    {
        if(i>=deleting_element_index_number)
        {
            arr[i]=arr[i+1];
        }
    }

    length_of_array--;
    cout<<"\n\nAfter Deleting "<<deleting_element<<" New Array Elements are: ";
    for(int i=0; i<length_of_array; i++)
    {
        cout<<setw(5)<<arr[i];
    }

}
