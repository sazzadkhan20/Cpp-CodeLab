#include<iostream>

using namespace std;

void func(int* ar,int sz)
{
    for(int i=0; i<sz; i++)
    {
        cout<<"  "<<ar[i];
    }
}

int main()
{
    int arr[] = {10,20,30,40,50};
    func(arr,5);
}

/*void func(int ar[],int sz)
{
    for(int i=0; i<sz; i++)
    {
        cout<<"  "<<ar[i];
    }
}

int main()
{
    int arr[] = {10,20,30,40,50};
    func(arr,5);
}*/

