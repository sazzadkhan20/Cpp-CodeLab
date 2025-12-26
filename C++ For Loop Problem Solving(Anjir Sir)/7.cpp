#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Input a positive Integer: ";
    cin>>n;
    cout<<endl<<endl;
    bool flag1=true,flag2=true,flag3=true;;
    for(int i=1; i<=n/2; i++)
    {
        for(int j=2; j<i; j++)
        {
           if(i%j==0)
           {
               flag1=true;
           }
        }
        for(int j=2; j<n-i; j++)
        {
            if((n-i)%j==0)
            {
                flag2=true;
            }
        }
        if(flag1==false && flag2==false)
        {
            cout<<n<<" = "<<i<<" + "<<(n-i)<<endl;
            flag3=false;
        }
        flag1=false;
        flag2=false;
    }
    if(flag3==true)
    {
        cout<<n<<" number can not be expressed as Sum of two numbers"<<endl;
    }

}
