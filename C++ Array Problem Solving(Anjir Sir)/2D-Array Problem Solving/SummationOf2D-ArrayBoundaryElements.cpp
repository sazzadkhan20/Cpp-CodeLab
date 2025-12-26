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
    cout<<"\n\nEnter 2-D Array Elements: \n\n";
    int sumOfBoundaryElements = 0;

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
            //Check 1st and Last Row and 1st and Last Column
            if(i==0 || i==row-1 || j==0 || j==column-1)
            {
                sumOfBoundaryElements+=arr[i][j];
            }
        }
    }
    cout<<"\n\nSummation of Boundary Elements is: "<<sumOfBoundaryElements;
}
