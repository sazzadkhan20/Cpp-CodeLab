#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int length_of_array;
    cout<<"Enter the Array Length: ";
    cin>>length_of_array;
    int arr[length_of_array];
    cout<<"\n\nEnter The Array Elements: \n\n";
    int counting_elements;

    for(int i=0; i<length_of_array; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<length_of_array; i++){

        counting_elements = 0;
        cout<<"\n\nThe Elements of subset of "<<arr[i]<<" elements have difference 0 or 1 are : ";
        for(int j=0; j<length_of_array; j++)
        {
            if(i!=j)
            {
                if(arr[i]-arr[j]==0 || arr[j]-arr[i]==0)
                {
                    cout<<setw(5)<<arr[j];
                    counting_elements++;
                }
                else if(arr[i]-arr[j]==1 || arr[j]-arr[i]==1)
                {
                    cout<<setw(5)<<arr[j];
                    counting_elements++;
                }
            }
        }
        cout<<"\n\nThe number of subset of "<<arr[i]<<" elements have difference 0 or 1 are : "<<counting_elements;
    }
}
