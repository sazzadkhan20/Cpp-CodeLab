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

    int transposeMatrix[column][row];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
           transposeMatrix[j][i] = arr[i][j];
        }
    }
    cout<<"\n\n\n\nTranspose Matrix Elements are: \n\n";

    for(int i=0; i<column; i++)
    {
        cout<<endl<<"|";
        for(int j=0; j<row; j++)
        {
            cout<<"    "<<transposeMatrix[i][j];
        }
        cout<<"    |";
    }
}
