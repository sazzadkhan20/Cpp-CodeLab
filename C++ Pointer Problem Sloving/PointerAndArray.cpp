#include<iostream>

using namespace std;

int main()
{
    int arr[] = {10,20,30,40,50};
    cout<<&arr[0]<<"\n";
    cout<<arr<<"\n";
    cout<<arr[1]<<"\n";
    cout<<*(arr+1)<<"\n";
    cout<<*(1+arr)<<"\n";
    cout<<1[arr]<<"\n";
    cout<<2[arr]<<"\n";
    cout<<3[arr]<<"\n";

}
