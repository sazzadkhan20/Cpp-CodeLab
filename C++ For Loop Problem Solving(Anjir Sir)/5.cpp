#include<iostream>

using namespace std;

int main()
{
    int a,b,n,sum=0;
    cout<<"Input the starting number of the A.P. series: ";
    cin>>a;
    cout<<endl<<endl<<"Input the number of items for the A.P. series: ";
    cin>>b;
    cout<<endl<<endl<<"Input the common difference of A.P. series: ";
    cin>>n;
    cout<<endl<<endl<<"The Sum of the A.P. series are : "<<endl<<endl;
    cout<<a;
    sum=sum+a;
    for(int i=1; i<b; i++)
    {
        if(a!=b-1)
        {
          cout<<" + ";
        }
        a=a+n;
        cout<<a;
        sum=sum+a;

        }
        cout<<" = "<<sum;


}
