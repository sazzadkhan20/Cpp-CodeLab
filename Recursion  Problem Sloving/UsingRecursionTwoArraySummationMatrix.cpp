#include<iostream>

using namespace std;

void two_array_summation(int arr1[][100],int arr2[][100],int row,int column,int i,int j,int sum)
{
    sum=sum+arr1[i][j]+arr2[i][j];
    cout<<sum<<" ";
    sum = 0;
    if(column-1==j)
   {
       cout<<endl;
       if(row-1!=i)
       {
           j = -1;
           i++;
       }
   }
   if(row-1==i && column-1==j)
   {
      return;
   }
   two_array_summation(arr1,arr2,row,column,i,j+1,sum);
}

int main()
{
    int row,column;
    cin>>row>>column;
    int arr1[100][100];
    int arr2[100][100];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cin>>arr1[i][j];
        }
    }
     for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cin>>arr2[i][j];
        }
    }
    two_array_summation(arr1,arr2,row,column,0,0,0);
}
