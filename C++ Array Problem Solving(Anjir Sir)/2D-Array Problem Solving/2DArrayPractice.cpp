#include<iostream>

using namespace std;

int main()
{
    //int arr[4][3] ={{4,5},{1,21,-5},{3,1,4},{-3,8,99}};
    int arr[4][3] ;//={4,5,1,1,21,-5,3,1,4,-3,8,99};
    //cout<<arr<<endl<<&arr[0][0]<<endl;

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<4; i++)
    {
        cout<<endl<<endl;
        for(int j=0; j<3; j++)
        {
            cout<<"  "<<arr[i][j];
        }
    }

}


