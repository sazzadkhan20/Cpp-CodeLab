#include<iostream>

using namespace std;

int main()
{
    int row,column;
    cout<<"\n\nEnter 2-D Array Row Number: ";
    cin>>row;
    cout<<"\n\nEnter 2-D Array Column Number: ";
    cin>>column;
    int arr[row][column];
    if(row!=column)
    {
        cout<<"\n\nRow and Column Number should be Same";
        return 0;
    }
    cout<<"\n\nEnter 2-D Array Elements: \n\n";
    int sumOfMainDiagonalElements = 0;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"\n\nArray Elements are: \n\n";
    for(int i=0; i<row; i++)
    {
        cout<<endl<<"|";
        for(int j=0; j<column; j++)
        {
            cout<<"    "<<arr[i][j];
        }
        cout<<"    |";
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            //Check Main Diagonal
            if(i==j)
            {
                sumOfMainDiagonalElements+=arr[i][j];
            }
        }
    }
    cout<<"\n\nSummation of Main Diagonal Elements is: "<<sumOfMainDiagonalElements;
}

