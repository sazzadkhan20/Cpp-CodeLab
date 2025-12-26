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
   cout<<"\n\nAfter Split The array and Add the first half after the Second half of the Array Elements are: ";
   int tempElement;
   if(lengthofArray%2==0)
   {
       for(int i=0; i<lengthofArray/2; i++)
      {
       tempElement = arr[i];
       arr[i] = arr[(lengthofArray/2)+i];
       arr[(lengthofArray/2)+i] = tempElement;
      }
   }
   else
   {
    for(int i=0; i<lengthofArray/2; i++)
    {
       tempElement = arr[i];
       arr[i] = arr[(lengthofArray/2)+i+1];
       arr[(lengthofArray/2)+i+1] = tempElement;
    }
   }

   for(int i=0; i<lengthofArray; i++)
   {
       cout<<setw(5)<<arr[i];
   }
}
