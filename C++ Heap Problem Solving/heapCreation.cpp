#include<iostream>

using namespace std;

int main()
{
    int n,temp,k;
     n = 9;
    int A[] = {80, 65, 90, 50, 25, 30, 45, 55, 40};
    for (int i = 1; i<n; i++)
     {
         temp=A[i];
          k = i;
          while (k > 0 && A[k/2] < temp)
         {
             //cout<<A[k/2]<<endl;
              A[k] = A[k/2]; //copy parent’s value to child’s position
              k = k/2;            //consider data of upper/parent’s position
         }
          A[k] = temp;
      }
      for(int i=0; i<n; i++)
      {
          cout<<A[i]<<"  ";
      }
      cout<<endl<<endl;
}
