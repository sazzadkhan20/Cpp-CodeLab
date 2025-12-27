#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x = 0;
    char a,b,c;
    int numberOfStatements;
    cin>>numberOfStatements;

    for(int i=0; i<numberOfStatements; i++)
    {
        cin>>a>>b>>c;
        if(a == '+' || c == '+')
        {
            x++;
        }
        else if(a == '-' || c == '-')
        {
            x--;
        }
    }
    cout<<x;
    
}
