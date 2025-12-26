#include<iostream>

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
    cout<<"\n\Total Divisible number is: "<<counter;

}
