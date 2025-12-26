#include<iostream>

using namespace std;

int main()
{
   int lengthOfArray1,lengthOfArray2;
   cout<<"\n\nEnter First Array Length: ";
   cin>>lengthOfArray1;
   int arr1[lengthOfArray1];
   cout<<"\n\nEnter First Array Elements: \n\n";

   for(int i=0; i<lengthOfArray1; i++)
   {
       cin>>arr1[i];
   }
   cout<<"\n\nEnter Second Array Length: ";
   cin>>lengthOfArray2;
   int arr2[lengthOfArray2];
   cout<<"\n\nEnter Second Array Elements: \n\n";

   for(int i=0; i<lengthOfArray2; i++)
   {
       cin>>arr2[i];
   }
   int lengthOfintersectionArray = lengthOfArray1+lengthOfArray2;
   int intersectionArray[lengthOfintersectionArray];
   int intersectionArrayElementCount =0;

   for(int i=0; i<lengthOfArray1; i++)
   {
       bool flag = false;
       for(int j=0; j<lengthOfArray2; j++)
       {
           if(arr1[i]==arr2[j] && intersectionArrayElementCount==0)
           {
               intersectionArray[intersectionArrayElementCount] = arr1[i];
               intersectionArrayElementCount++;
           }
           else if(arr1[i]==arr2[j] && intersectionArrayElementCount>0)
           {
               for(int k=0; k<intersectionArrayElementCount; k++)
               {
                   if(arr1[i]==intersectionArray[k])
                   {
                       flag = true;
                       break;
                   }
               }
               if(!flag)
               {
                   intersectionArray[intersectionArrayElementCount] = arr1[i];
                   intersectionArrayElementCount++;
                   break;
               }
               else
               {
                   break;
               }
           }
       }
   }

   cout<<"\n\nIntersection Array Elements are: ";

   for(int i=0; i<intersectionArrayElementCount; i++)
   {
       cout<<intersectionArray[i]<<"   ";
   }
}
