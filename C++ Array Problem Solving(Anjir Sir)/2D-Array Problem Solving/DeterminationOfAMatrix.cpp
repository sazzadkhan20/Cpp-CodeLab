#include<iostream>

using namespace std;

int main()
{
    int row,column;
    cout<<"\n\nEnter Matrix Row Number: ";
    cin>>row;
    cout<<"\n\nEnter Matrix Column Number: ";
    cin>>column;
    int matrix[row][column];
    if(row!=column)
    {
        cout<<"\n\nRow and Column Number should be Same";
        return 0;
    }
    cout<<"\n\nEnter Matrix Elements: \n\n";

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"\n\nArray Elements are: \n\n";

    for(int i=0; i<row; i++)
    {
        cout<<endl<<"|";
        for(int j=0; j<column; j++)
        {
            cout<<"    "<<matrix[i][j];
        }
        cout<<"    |";
    }
   int i = 0;
   int determineOfMatrix = 0;

   while(i<column)
   {

       if(i==0)
       {

       }
       else
       {
           if(i%2!=0)
           {

           }
           else
           {

           }
       }
   }
}
