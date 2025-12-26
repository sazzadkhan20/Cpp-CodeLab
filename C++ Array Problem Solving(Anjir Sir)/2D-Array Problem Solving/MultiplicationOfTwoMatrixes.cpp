#include<iostream>

using namespace std;

int main()
{
    int Matrix_1Row,Matrix_2Row,Matrix_1Column,Matrix_2Column;
    cout<<"\n\nEnter Matrix-1 Row Number: ";
    cin>>Matrix_1Row;
    cout<<"\n\nEnter Matrix-1 Column Number: ";
    cin>>Matrix_1Column;
    int Matrix_1[Matrix_1Row][Matrix_1Column];
    cout<<"\n\nEnter Matrix-1 Elements: \n\n";

    for(int i=0; i<Matrix_1Row; i++)
    {
        for(int j=0; j<Matrix_1Column; j++)
        {
            cin>>Matrix_1[i][j];
        }
    }

    cout<<"\n\nEnter Matrix-2 Row Number: ";
    cin>>Matrix_2Row;
    if(Matrix_1Column!=Matrix_2Row)
    {
        cout<<"\n\nMatrix-1 Column and Matrix-2 Row Number should be Same\n\n";
        return 0;
    }
    cout<<"\n\nEnter Matrix-2 Column Number: ";
    cin>>Matrix_2Column;
    int Matrix_2[Matrix_2Row][Matrix_2Column];
    cout<<"\n\nEnter Matrix-2 Elements: \n\n";

    for(int i=0; i<Matrix_2Row; i++)
    {
        for(int j=0; j<Matrix_2Column; j++)
        {
            cin>>Matrix_2[i][j];
        }
    }

    int multilicationMatrix[Matrix_1Row][Matrix_2Column];
    int j;
    int tempElementSum;
    int tempCount;

    for(int i=0; i<Matrix_1Row; i++)
    {
        j=0;
        tempElementSum = 0;
        tempCount = 0;
        while(j<Matrix_2Column)
           {
               tempElementSum += Matrix_1[i][tempCount]*Matrix_2[tempCount][j];
               tempCount++;
               if(tempCount==Matrix_2Row)
               {
                   multilicationMatrix[i][j] = tempElementSum;
                   tempCount = 0;
                   j++;
                   tempElementSum = 0;
               }
           }
    }
    cout<<"\n\n\n\nMultiplication of Two Matrix's Elements are: \n\n";

    for(int i=0; i<Matrix_1Row; i++)
    {
        cout<<endl<<"|";
        for(int j=0; j<Matrix_2Column; j++)
        {
            cout<<"    "<<multilicationMatrix[i][j];
        }
        cout<<"    |";
    }
}

