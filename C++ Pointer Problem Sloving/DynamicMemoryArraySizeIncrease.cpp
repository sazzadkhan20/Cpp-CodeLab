#include<iostream>

using namespace std;

int main()
{
    int *arr = new int[3];

    for(int i=0; i<3; i++)
    {
        cin>>arr[i];
    }
    int *cparr = new int[3];
    for(int i=0; i<3; i++)
    {
        cparr[i]=arr[i];
    }
   delete[] arr; //Heap Memory Address delete
   //cout<<arr<<endl;
   arr = new int [5];
   //cout<<arr<<endl;

   for(int i=0; i<3; i++)
    {
        arr[i] = cparr[i];
    }
    delete [] cparr;
    arr[3] = 90;
    arr[4] = 100;
   for(int i=0; i<5; i++)
   {
       cout<<arr[i]<<"  ";
   }
   delete [] arr;  //Deallocation/Delete process//always kora good practice
}
