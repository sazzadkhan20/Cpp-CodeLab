#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int lengthofarray;
    cout<<"Enter the Array Length: ";
    cin>>lengthofarray;
    cout<<"\n\nEnter the Array Elements: \n\n";
    int arr[lengthofarray];

    for(int i=0; i<lengthofarray; i++)
    {
        cin>>arr[i];
    }
   /*  Another Process----
    arr[lengthofarray] = arr[0];

   for(int i=0; i<lengthofarray; i++)
   {
        arr[i]=arr[i+1];
   }*/
     int first_element = arr[0];
    for(int i=0; i<lengthofarray; i++)
    {
        if(i!=lengthofarray-1){

            arr[i]=arr[i+1];
        }
        else
        {
            arr[i]=first_element;
        }
    }
    //arr[lengthofarray+10]=255;
    //cout<<endl<<arr[lengthofarray+10];

    cout<<"\n\nCyclicallay Permute the Array Elements: ";

    for(int i=0; i<lengthofarray; i++)
    {
        cout<<setw(5)<<arr[i];
    }

}
