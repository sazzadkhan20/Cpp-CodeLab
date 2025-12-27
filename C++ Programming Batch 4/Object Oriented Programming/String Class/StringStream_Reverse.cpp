#include<bits/stdc++.h>

using namespace std;

void print(stringstream& ss)
{
    string word;
    if(ss >> word)
    {
        print(ss);
        cout<<word<<endl;
    }
}


/*void print(int& x)
{
    x = 100;
}*/

int main()
{
    string s;
    getline(cin,s);
    //int x = 10;
    stringstream ss;
    ss << s;
    print(ss);

    //print(x);
    //cout<<x<<endl;
}