#include<iostream>

using namespace std;

int main()
{
   int length_of_array;
    cout<<"\nEnter Array Length: ";
    cin>>length_of_array;
    cout<<"\n\nEnter Array Elements: \n\n";
    int arr[length_of_array];
    int repeated_element,repeated_element_index_number;
    int temp_element;
    int temp_element_index_number;
    int temp_count_element = 0;

    for(int i=0; i<length_of_array; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<length_of_array; i++)
    {
        temp_element = arr[i];
        temp_element_index_number = i;
        for(int j=i; j<length_of_array; j++)
        {
            if(temp_element>arr[j])
            {
                temp_element =arr[j];
                temp_element_index_number = j;

            }
        }
        arr[temp_element_index_number] = arr[i];
        arr[i] = temp_element;
    }
    cout<<"\n\nArray Elements are: ";
    for(int i=0; i<length_of_array; i++)
    {
        cout<<arr[i]<<"   ";
    }
    int i=0;
    while(i<length_of_array)
    {
            if(arr[i]==arr[i+1])
            {
                length_of_array--;
                for(int j=i; j<length_of_array; j++)
                {
                   arr[j] = arr[j+1];
                }
               /* for(int j=0; j<length_of_array; j++)
                {
                    cout<<"  "<<arr[j];
                }*/
               // i=0;
            }
            else{
               i++;
            }
    }
    length_of_array++;
    cout<<"\n\nUnique Array Elemets are : ";
    for(int i=0; i<length_of_array; i++)
    {
        cout<<arr[i]<<"   ";
    }
}
