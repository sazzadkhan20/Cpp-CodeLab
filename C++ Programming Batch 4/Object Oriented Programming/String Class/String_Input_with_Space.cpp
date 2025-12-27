#include<bits/stdc++.h>

using namespace std;

int main()
{
    // int x;
    // cin>>x;
    // //cin.ignore();
    // getchar();
    // string s;

    // getline(cin,s);
    // cout<<x<<endl;
    // cout<<s<<endl;

    string s[5];
    int x;
    cin>>x;
    cin.ignore();
    for(int i=0; i<5; i++)
    {
        getline(cin,s[i]);
        //getchar();
    }
    cout<<x<<endl;
     for(int i=0; i<5; i++)
    {
        cout<<s[i]<<endl;
        
    }
}