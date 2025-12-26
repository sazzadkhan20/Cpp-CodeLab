//Specific Column Highest Element
#include<iostream>

using namespace std;

int main()
{
    int row,column,columnNumber;
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
    cout<<"\n\nEnter A Column Number : ";
    cin>>columnNumber;
    if(column<columnNumber)
    {
        cout<<"\n\nColumn Number should be In Range";
        return 0;
    }
    int temp = arr[0][columnNumber-1];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            if(j==columnNumber-1 && temp<arr[i][j])
            {
                temp = arr[i][j];
            }
        }
    }
    cout<<"\n\n"<<columnNumber<<" Number Column Highest Element is: "<<temp<<endl<<endl;
}






/*//Specific Row Highest Element
#include<iostream>

using namespace std;

int main()
{
    int row,column,rowNumber;
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
    cout<<"\n\nEnter A Row Number : ";
    cin>>rowNumber;
    if(row<rowNumber)
    {
        cout<<"\n\nRow Number should be In Range";
        return 0;
    }
    int temp = arr[rowNumber-1][0];
    bool flag = false;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            if(i==rowNumber-1 && temp<arr[i][j])
            {
                temp = arr[i][j];
                flag = true;
            }
        }
        if(flag)
        {
            break;
        }
    }
    cout<<"\n\n"<<rowNumber<<" Number Row Highest Element is: "<<temp<<endl<<endl;
}*/



