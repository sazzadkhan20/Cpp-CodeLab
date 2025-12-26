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
    bool flag = false;

    for(int i=0; i<length_of_array; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<length_of_array; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[i]==arr[j])
            {
                flag = true;
                repeated_element = arr[i];
                repeated_element_index_number = i;
                break;
            }
        }
        if(flag)
        {
            break;
        }
    }
    cout<<"\n\nFirst Repeated Element Index Number is: "<<repeated_element_index_number;
    cout<<"\n\nFirst Repeated Element is: "<<repeated_element<<"\n\n";
}

/*#include<iostream>

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
    for(int i=0; i<length_of_array-1; i++)
    {
            if(arr[i]==arr[i+1])
            {
                repeated_element = arr[i];
                repeated_element_index_number = i+1;
                break;
            }
    }
    cout<<"\n\nFirst Repeated Element Index Number is: "<<repeated_element_index_number;
    cout<<"\n\nFirst Repeated Element is: "<<repeated_element<<"\n\n";
}*/

