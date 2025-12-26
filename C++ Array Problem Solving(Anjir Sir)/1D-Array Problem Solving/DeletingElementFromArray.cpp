#include<iostream>

using namespace std;

int main()
{
    int length_of_array;
    cout<<"\n\nEnter The Array Length: ";
    cin>>length_of_array;
    int arr[length_of_array];
    cout<<"\n\nEnter The Array Elements : \n\n";

    for(int i=0; i<length_of_array; i++)
    {
        cin>>arr[i];
    }
    cout<<"\n\nEnter The Array Elements are: ";

    for(int i=0; i<length_of_array; i++)
    {
        cout<<arr[i]<<"  ";
    }
    int deleting_element_count;
    int deleting_element_index_count = 0;
    cout<<"\n\nPlease Enter How Many Elements Do you want to delete : ";
    cin>>deleting_element_count;
    cout<<"\n\nEnter The Deleting Elements of The Above Array: \n\n";
    int deleting_element_arr[deleting_element_count];
    int deleting_element_index_arr[deleting_element_count];
    int temp_element_of_deleting_element,temp_element_of_deleting_element_index;

    for(int i=0; i<deleting_element_count; i++)
    {
        cin>>deleting_element_arr[i];
    }
    for(int i=0; i<deleting_element_count; i++)
    {
        temp_element_of_deleting_element = deleting_element_arr[i];
        temp_element_of_deleting_element_index = i;
        for(int j=i; j<deleting_element_count; j++)
        {
            if(temp_element_of_deleting_element>deleting_element_arr[j])
            {
                 temp_element_of_deleting_element=deleting_element_arr[j];
                temp_element_of_deleting_element_index = j;

            }
        }
        deleting_element_arr[temp_element_of_deleting_element_index] = deleting_element_arr[i];
        deleting_element_arr[i] = temp_element_of_deleting_element;
    }
    int i =0;
    while(i<deleting_element_count)
    {
        if(deleting_element_arr[i]==deleting_element_arr[i+1])
        {
            deleting_element_count--;
            for(int j=i; j<deleting_element_count; j++)
            {
                deleting_element_arr[j] = deleting_element_arr[j+1];
            }
            i=0;
        }
        else{
          i++;
        }
    }
    cout<<"\n\nArray Elements are: ";
    for(int i=0; i<deleting_element_count+1; i++)
    {
        cout<<deleting_element_arr[i]<<"   ";
    }

    for(int i=0; i<deleting_element_count+1; i++)
    {
        for(int j=0; j<length_of_array; j++)
        {
            if(deleting_element_arr[i]==arr[j])
            {
                deleting_element_index_arr[deleting_element_index_count] = j;
                deleting_element_index_count++;
            }
        }
    }
    /*int temp_counter =0;

    for(int i=0; i<deleting_element_count; i++)
    {
        for(int j=0; j<length_of_array; j++)
        {
            if(deleting_element_arr[i]==arr[j])
            {
                deleting_element_index_arr[temp_counter] = j;
                temp_counter++;
            }
        }
    }*/
    int temp_element;
    int temp_element_index_number;
    for(int i=0; i<deleting_element_index_count; i++)
    {
        temp_element = deleting_element_index_arr[i];
        temp_element_index_number = i;
        for(int j=i; j<deleting_element_index_count; j++)
        {
            if(temp_element>deleting_element_index_arr[j])
            {
                temp_element =deleting_element_index_arr[j];
                temp_element_index_number = j;

            }
        }
        deleting_element_index_arr[temp_element_index_number] = deleting_element_index_arr[i];
        deleting_element_index_arr[i] = temp_element;
    }

    for(int i=0; i<deleting_element_index_count; i++)
    {
        if(i!=deleting_element_index_count-1){
           for(int j=deleting_element_index_arr[i]; j<deleting_element_index_arr[i+1]-1; j++)
        {
            arr[j-i] = arr[j+1];
        }
        }
        else
        {
         for(int j=deleting_element_index_arr[i]; j<length_of_array; j++)
        {
            arr[j-i] = arr[j+1];
        }

        }
    }

    cout<<"\n\nAfter deleting Elements in Array New Array Elements are: ";

    for(int i=0; i<length_of_array-deleting_element_index_count; i++)
    {
        cout<<arr[i]<<"  ";
    }
}



/*#include<iostream>

using namespace std;

int main()
{
    int length_of_array = 20;
    int arr[length_of_array] = {5,7,9,22,85,7,36,48,59,99,48,36,7,7,33,78,5,66,5,21};
    int deleting_element_index_arr[4] = {1,5,12,13};
    cout<<"\nArray Elements are: ";

    for(int i=0; i<length_of_array; i++)
    {
        cout<<arr[i]<<"  ";
    }

    for(int i=0; i<4; i++)
    {
        if(i!=3){
           for(int j=deleting_element_index_arr[i]; j<deleting_element_index_arr[i+1]-1; j++)
        {
            arr[j-i] = arr[j+1];
        }
        }
        else
        {
         for(int j=deleting_element_index_arr[i]; j<length_of_array; j++)
        {
            arr[j-i] = arr[j+1];
        }

        }
    }

    cout<<"\n\nAfter deleting 7 Element in Array New Array Elements are: ";
    length_of_array-=4;

    for(int i=0; i<length_of_array; i++)
    {
        cout<<arr[i]<<"  ";
    }
}*/
