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
    int temp,highest_temp_arr_index;
   for (int i = 0; i < arraySize - 1; i++)
    {
        int highest_temp_arr_index = i;
        for (int j = i + 1; j < arraySize; j++)
        {
            if (arr[j] > arr[highest_temp_arr_index])
            {
                highest_temp_arr_index = j;
            }
        }

        if (highest_temp_arr_index != i)
        {
            swap(arr[i], arr[highest_temp_arr_index]);
        }
    }
    long long int maximumSum = 0;

    for(int i= 0 ; i<choosingElement; i++)
    {
       maximumSum += arr[i];
    }
    long long int n = maximumSum;
    int tempCount = 0;
    while(n!=0)
    {
       n = n/10;
       tempCount++;
    }
    if(maximumSum<0 && tempCount>9)
    {
        cout<<0;
        return 0;
    }
    cout<<maximumSum;


}
