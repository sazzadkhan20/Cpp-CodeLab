#include<iostream>
#include<cctype>

using namespace std;

int main()
{
    string s;
    cout<<"\n\nEnter a String(press Double time Enter to stoping From user Input): ";
    string line;

    while(true)
    {
       getline(cin,line);
       if(line.empty())
       {
           break;
       }
       s+=line+'\n';
    }
    cout<<"\n\nOutput String: ";
    for(int i=0; i<s.length(); i++)
    {
        if(isprint(s[i])==false)
        {
            break;
        }
        else
        {
            cout<<s[i];
        }
    }
    /*int i=0;
    while(s[i]!='\n')
    {
        cout<<s[i];
        i++;
    }*/
}
