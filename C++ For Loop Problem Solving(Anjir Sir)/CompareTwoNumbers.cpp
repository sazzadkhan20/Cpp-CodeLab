#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cout<<"Input the first integer: ";
    cout<<"Input the first integer: ";
    cin>>n;
    cout<<"\n\nInput the Second integer: ";
    cin>>m;
    if(n==m)
    {
        cout<<endl<<endl<<n<<" == "<<m;
    }
    if(n!=m)
    {
        cout<<endl<<endl<<n<<" != "<<m;
    }
    if(n>m)
    {
        cout<<endl<<endl<<n<<" > "<<m;
    }
    if(m>n)
    {
        cout<<endl<<endl<<n<<" < "<<m;
    }
    if(n>=m)//n>m || n==m
    {
        cout<<endl<<endl<<n<<" >= "<<m;
    }
    if(n<=m)//n<m || m==n
    {
        cout<<endl<<endl<<n<<" <= "<<m;
    }
}
