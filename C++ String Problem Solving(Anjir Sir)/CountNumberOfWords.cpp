#include<iostream>

using namespace std;

int main()
{
    string s;
    cout<<"\n\nEnter a String: ";
    getline(cin,s);
    int countNumberOfWords = 0;
    bool flag = false;

    for(int i=0; i<s.length(); i++)
    {
        if(i!=0 && s[i]==' ' && s[i-1]!=' ')
        {
            countNumberOfWords++;
            flag = true;
        }
    }
    if(flag)
    {
       countNumberOfWords++;
    }
    if(s[s.length()-1]==' ')
    {
       countNumberOfWords--;
    }
    cout<<"\n\nNumber of Words of "<<s<<" String is : "<<countNumberOfWords;

}
