#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int arr1_length,arr2_length,temp,lowest_temp_arr_index;
    float median;
    cout<<"\n\nEnter First Array Length: ";
    cin>>arr1_length;
    int arr1[arr1_length];
    cout<<"\n\nEnter The First Array Elements :\n\n";

    for(int i=0; i<arr1_length; i++)
    {
       cin>>arr1[i];
    }
    for(int i=0; i<arr1_length; i++)
    {
        temp = arr1[i];
        lowest_temp_arr_index = i;
        for(int j=i; j<arr1_length; j++)
        {
            //Checking Lowest Number of the Array
            if(temp>arr1[j])
            {
                temp = arr1[j];
                lowest_temp_arr_index = j;
            }
        }
        //cout<<"\n\n"<<temp<<"\n\n";
        arr1[lowest_temp_arr_index]=arr1[i];
        arr1[i]=temp;

    }
    cout<<"\n\nArray-1 Elements: ";
    for(int i=0; i<arr1_length; i++)
    {
        cout<<arr1[i]<<"  ";
    }
    cout<<"\n\nEnter Second Array Length: ";
    cin>>arr2_length;
    int arr2[arr2_length];
    cout<<"\n\nEnter The Second Array Elements :\n\n";

    for(int i=0; i<arr2_length; i++)
    {
       cin>>arr2[i];
    }
    for(int i=0; i<arr2_length; i++)
    {
        temp = arr2[i];
        lowest_temp_arr_index = i;
        for(int j=i; j<arr2_length; j++)
        {
            //Checking Lowest Number of the Array
            if(temp>arr2[j])
            {
                temp = arr2[j];
                lowest_temp_arr_index = j;
            }
        }
        //cout<<"\n\n"<<temp<<"\n\n";
        arr2[lowest_temp_arr_index]=arr2[i];
        arr2[i]=temp;

    }
    cout<<"\n\nArray-2 Elements: ";
    for(int i=0; i<arr1_length; i++)
    {
        cout<<arr1[i]<<"  ";
    }
    int tempValue = arr1_length+arr2_length;

    if(tempValue%2==0)
    {
       if(tempValue/2>arr1_length)
       {
          median = 0.5*(arr2[arr2_length-(tempValue/2)] + arr2[arr2_length-(tempValue/2)-1]);
       }
       else if(tempValue/2<arr1_length)
       {
         median = 0.5*(arr1[(tempValue/2)] + arr1[(tempValue/2)-1]);
       }
       else if(tempValue/2==arr1_length)
       {
         median = 0.5*(arr1[arr1_length-1] + arr2[0]);
       }
    }
    else
    {

    }

    cout<<"\n\nThe Median is : "<<median;
}

