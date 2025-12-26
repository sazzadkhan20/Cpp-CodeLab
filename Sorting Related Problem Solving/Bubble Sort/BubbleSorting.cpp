#include<iostream>

using namespace std;

int main()
{
    int lengthOfArray,tempElemnt;
    cout<<"\n\nEnter Array Length: ";
    cin>>lengthOfArray;
    cout<<"\n\nEnter Array Elements:\n\n";
    int arr[lengthOfArray];

    for(int i=0; i<lengthOfArray; i++)
    {
        cin>>arr[i];
    }
    cout<<"\n\nArray Elements are: ";
    for(int i=0; i<lengthOfArray; i++)
    {
        cout<<arr[i]<<"   ";
    }
    //Bubble Sort Opertion On Array
    int i = lengthOfArray-1;
    while(i>0)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                tempElemnt = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tempElemnt;
            }
        }
        i--;
    }

    cout<<"\n\nAfter Bubble Sort Array Elements are: ";
    for(int i=0; i<lengthOfArray; i++)
    {
        cout<<arr[i]<<"   ";
    }

}
