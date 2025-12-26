#include<iostream>

using namespace std;

int main()
{
    float a,b,n,sum=0;
    cout<<"Input the starting number of the G.P. series: ";
    cin>>a;
    cout<<endl<<endl<<"Input the number of items for the G.P. series: ";
    cin>>b;
    cout<<endl<<endl<<"Input the common ratio of the G.P. series: ";
    cin>>n;
    cout<<endl<<endl<<"The numbers for the G.P. series: "<<endl<<endl;
    cout<<a<<"\t";
    sum=sum+a;
    for(int i=1; i<b; i++)
    {
        a=a*n;
        cout<<a<<"\t";
        sum=sum+a;
    }
    cout<<endl<<endl<<"The Sum of the G.P. series is: "<<sum;

}
