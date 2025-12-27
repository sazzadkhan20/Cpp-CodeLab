#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int size = 2*n;
    int elements[size];
    int count = 0;
    int tempCount;

    for(int i=0; i<size; i++)
    {
        cin>>elements[i];
        count += elements[i];
    }
    count = count/n;
    
    for(int i=0; i<size; i++)
    {
        tempCount = 0;
        for(int j=i+1; j<size; j++)
        {
            tempCount = elements[i];
            tempCount += elements[j];
            if(tempCount == count)
            {
                cout<<elements[i]<<" "<<elements[j]<<endl;
                elements[i] = 0;
                elements[j] = 0;
                break;
            }

        }
    }

}