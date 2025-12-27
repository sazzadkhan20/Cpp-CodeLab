#include<bits/stdc++.h>

using namespace std;

int main()
{
    int mat[5][5];
    int row,column;
    bool flag = false;

    for(int i=0; i<5; i++)
    {
       for(int j=0; j<5; j++)
      {
        cin>>mat[i][j];
      } 
    }
    for(int i=0; i<5; i++)
    {
       for(int j=0; j<5; j++)
      {
         if(mat[i][j] == 1)
         {
            row = i;
            column = j;
            flag = true;
            break;
         }
      }
      if(flag)
      break;
    }
    cout<<abs(row-2) + abs(column-2)<<endl;
}