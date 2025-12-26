#include<iostream>

using namespace std;

int main()
{
    int length,temp1,temp2;
    cout<<"Enter a Array Length: ";
    cin>>length;
    int arr[length];

    for(int i=0; i<length; i++)
    {
        cin>>arr[i];
    }
    temp1=temp2=arr[0];
    for(int i=0; i<length; i++)
    {
        if(temp1>arr[i])
        {
            temp1=arr[i];
        }
        if(temp2<arr[i])
        {
            temp2=arr[i];
        }
    }
    cout<<"The Lowest Elements of the Array is: "<<temp1<<endl<<endl;
    cout<<"The Highest Elements of the Array is: "<<temp2<<endl;

}
