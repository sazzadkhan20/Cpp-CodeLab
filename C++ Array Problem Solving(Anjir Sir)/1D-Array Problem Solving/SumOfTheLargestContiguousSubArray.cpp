#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
   int lengthofArray;
   cout<<"\n\nEnter The Array Length: ";
   cin>>lengthofArray;
   int arr[lengthofArray];
   cout<<"\n\nEnter The Array Elements: \n\n";

   for(int i=0; i<lengthofArray; i++)
   {
       cin>>arr[i];
   }

  int temp = arr[0];
  int maxSum = arr[0];
  int tempCount;
  bool flag = true;
   for(int i=1; i<lengthofArray; i++)
   {
       temp+=arr[i];
       if(temp<arr[i])
       {
           temp = arr[i];
       }
       if(maxSum<temp)
       {
           maxSum = temp;
           if(flag)
           {
               cout<<"\n\nStart Index: "<<i;
               flag = false;
           }
           tempCount = i;
       }
   }
   cout<<"\n\nEnding Index: "<<tempCount;
   cout<<"\n\nMaximum Sum of the Sub-array is: "<<maxSum;
}
