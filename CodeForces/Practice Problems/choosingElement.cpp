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
     int maximumSum, tempSum;
    int tempCount,tempIndex;

    for(int i=0; i<arraySize; i++)
    {
       for(int j=0; j<arraySize; j++)
       {
          tempSum = arr[i];
          tempIndex = j;
           tempCount = 1;
          while(tempCount < choosingElement)
          {
              if(i == tempIndex)
              {
                 tempIndex++;
                 continue;
              }
              if(tempIndex >= arraySize)
              {
                break;
              }
              tempSum += arr[tempIndex];
              tempIndex++;
              tempCount++;
          }
          if(i==0 && j==0)
          {
            maximumSum = tempSum;
          }
          if(maximumSum < tempSum)
          {
             maximumSum = tempSum;
          }
       }
    }
    cout<<maximumSum;

}
