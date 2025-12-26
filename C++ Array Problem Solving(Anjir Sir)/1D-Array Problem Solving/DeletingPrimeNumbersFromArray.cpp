#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int lengthof_array;
    cout<<"Enter the Length of the Array: ";
    cin>>lengthof_array;
    int arr[lengthof_array];
    cout<<"\n\nEnter the Elements of the Array: \n\n";

    for(int i=0; i<lengthof_array; i++)
    {
        cin>>arr[i];
    }
    cout<<"\n\nThe Elements of the Array Without Prime Numbers are: ";
    bool flag=false;

    for(int i=0; i<lengthof_array; i++)
    {
        for(int j=2; j<arr[i]; j++)
        {
            if(arr[i]%j==0)
            {
                flag =true;
                break;
            }
            else
            {
                arr[i]=0;
                flag=false;
            }
        }
        if(flag)
        {
           cout<<setw(5)<<arr[i];
        }
        else
        {
            cout<<setw(5)<<arr[i];
        }
    }
}
