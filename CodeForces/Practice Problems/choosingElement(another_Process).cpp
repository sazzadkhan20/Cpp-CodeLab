#include<iostream>

using namespace std;

int main()
{
    int arraySize,choosingElement;
    cin>>arraySize>>choosingElement;
    if(choosingElement>arraySize)
        return 0;

     int arr[arraySize];
    for(int i=0; i<arraySize; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=1; i<arraySize; i++)
    {
       for(int j=i; j>0; j--)
       {
           if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
           else
            break;
       }
    }
    long long int maximumSum = 0;

    for(int i=arraySize - choosingElement; i<arraySize; i++)
    {
       maximumSum += arr[i];
    }
    cout<<maximumSum<<endl;
    maximumSum = 215231564658465;
    cout<<maximumSum;

}
