#include<bits/stdc++.h>

using namespace std;

long long int equation(int x,int n)
{
    if(n <= 1)
    {
        return 0;
    }
    if(n%2 !=0)
        return pow(x*1.0,(n-1)*1.0)+equation(x,n-3);
    else
    return pow(x*1.0,n*1.0)+equation(x,n-2);
}

int main()
{
     int x,n;
    cin>>x>>n;

    cout<<equation(x,n);

}