#include <bits/stdc++.h>

using namespace std;



int main()
{
    char s[100001];
    
    while(cin.getline(s,100001))
    {
        sort(s,s+strlen(s));
        int i=0;
        while(s[i]!='\0')
        {
            if(s[i] == ' ')
            {
                i++;
                continue;
            }
            cout<<s[i];
            i++;
        }
        cout<<endl;
    }
    return 0;
}
