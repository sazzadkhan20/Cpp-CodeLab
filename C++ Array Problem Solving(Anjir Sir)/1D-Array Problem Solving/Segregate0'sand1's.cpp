#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int lengthOfArray;
    cout<<"Enter Array Length: ";
    cin>>lengthOfArray;
    int arr[lengthOfArray];
    int tempCountZero = 0;
    cout<<"\n\nEnter Array Elements: \n\n";

    for(int i=0; i<lengthOfArray; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n\After Segregate 1's and 0's Array Elements are: ";

    for(int i=0; i<lengthOfArray; i++)
    {
        if(arr[i]==0)
        {
           arr[i] = arr[tempCountZero];
           arr[tempCountZero] = 0;
           tempCountZero++;
        }
    }

    for(int i=0; i<lengthOfArray; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl<<pow(5,2)<<endl;

}
