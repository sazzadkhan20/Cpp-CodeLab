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
   int lengthOfUnionArray = lengthOfArray1+lengthOfArray2;
   int unionArray[lengthOfUnionArray];
   int unionArrayElementCount =0;

   for(int i=0; i<lengthOfArray1; i++)
   {
       bool flag1 = false;
       bool flag2 = false;
       for(int j=0; j<lengthOfArray2; j++)
       {
           if(arr1[i]==arr2[j] && unionArrayElementCount==0)
           {
               unionArray[unionArrayElementCount] = arr1[i];
               unionArrayElementCount++;
               flag1 = true;
           }
        else if(arr1[i]==arr2[j])
         {
             flag1 = true;
             break;
         }
       }
       if(flag1)
       {
           for(int k=0; k<unionArrayElementCount; k++)
               {
                   if(arr1[i]==unionArray[k])
                   {
                       flag2 = true;
                       break;
                   }
               }
               if(!flag2)
               {
                   unionArray[unionArrayElementCount] = arr1[i];
                   unionArrayElementCount++;
                   //break;
               }
       }
       else
       {
          unionArray[unionArrayElementCount] = arr1[i];
          unionArrayElementCount++;
       }
       if(i==lengthOfArray1-1)
       {
           for(int p=0; p<lengthOfArray2; p++)
           {
                bool flag3 = false;
               for(int w=0; w<lengthOfArray1; w++)
               {
                   if(arr2[p]==arr1[w])
                   {
                      flag3 = true;
                      break;
                   }
               }
               if(!flag3)
               {
                  unionArray[unionArrayElementCount] = arr2[p];
                  unionArrayElementCount++;
               }
           }
       }
   }

   cout<<"\n\nUnion Array Elements are: ";

   for(int i=0; i<unionArrayElementCount; i++)
   {
       cout<<unionArray[i]<<"   ";
   }
}

