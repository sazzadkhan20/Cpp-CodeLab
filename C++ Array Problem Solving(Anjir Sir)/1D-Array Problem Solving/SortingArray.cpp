#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int lengthof_array;
    cout<<"Enter the length of the Array: ";
    cin>>lengthof_array;
    int main_arr[lengthof_array];
    //int sorted_arr[lengthof_array];
    int temp,lowest_temp_arr_index=0;
    //int temp_lengthof_sorted_array=0;
    cout<<"\n\nPlease Enter the Elements of the Array: \n\n";

    for(int i=0; i<lengthof_array; i++)
    {
        cin>>main_arr[i];
    }
    for(int i=0; i<lengthof_array; i++)
    {
        temp = main_arr[i];
        lowest_temp_arr_index = i;
        for(int j=i; j<lengthof_array; j++)
        {
            //Checking Lowest Number of the Array
            if(temp>main_arr[j])
            {
                temp = main_arr[j];
                lowest_temp_arr_index = j;
            }
        }
        //cout<<"\n\n"<<temp<<"\n\n";
        main_arr[lowest_temp_arr_index]=main_arr[i];
        main_arr[i]=temp;

    }
    cout<<"\n\nThe Sorting Array is: ";
    for(int i=0; i<lengthof_array; i++)
    {
        cout<<setw(5)<<main_arr[i];
    }
    cout<<"\n\n";
}
