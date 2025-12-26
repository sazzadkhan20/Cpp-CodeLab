#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int lengthof_array;
    cout<<"Enter the Length of the Array: ";
    cin>>lengthof_array;
    int arr[lengthof_array];
    int specific_number,counter=0;
     cout<<"\n\nEnter the specific number which you want to divide the Array Elements: ";
     cin>>specific_number;
    cout<<"\n\nEnter the Elements of the Array: \n\n";

    for(int i=0; i<lengthof_array; i++)
    {
        cin>>arr[i];
        if(arr[i]%specific_number==0)
        {
            counter++;
        }
    }
    int divisible_by_specific_number_arr[counter];
    int temp_lengthof_array=0;

    for(int i=0; i<lengthof_array; i++)
    {
        if(arr[i]%specific_number==0)
        {
            divisible_by_specific_number_arr[temp_lengthof_array]=arr[i];
            temp_lengthof_array++;
        }
    }
    cout<<"\n\nThe New Array Elements which is divisible By "<<specific_number<<" are: ";
    for(int i=0; i<counter; i++)
    {
        cout<<setw(5)<<divisible_by_specific_number_arr[i];
    }

}

