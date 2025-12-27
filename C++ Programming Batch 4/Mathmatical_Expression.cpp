#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    char s,q;
    cin>>a;
   // getchar();
    cin>>s;
    //getchar();
    cin>>b;
    //getchar();
    cin>>q;
    //getchar();
    cin>>c;

    if(s == '+')
    {
       if(a+b == c) cout<<"Yes\n";
       else 
       cout<< (a+b) <<endl;
    }
    else if(s == '-')
    {
       if(a-b == c) cout<<"Yes\n";
       else
       cout<< (a-b) <<endl; 
    }
    else if(s == '*')
    {
       if(a*b == c) cout<<"Yes\n";
       else
       cout<< (a*b) <<endl; 
    }
}