#include<iostream>

using namespace std;

bool chack_given_substring_present(string s,string subs)
{
    int tempCount;
    bool flag = false;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]==subs[0] && i!=s.length()-1)
        {
            flag = true;
            tempCount = i+1;
            //cout<<s[i]<<endl<<subs[0]<<endl;
            for(int j=1; j<subs.length(); j++)
            {
                if(s[tempCount]!=subs[j])
                {
                    flag = false;
                    break;
                }
                else
                {
                    //cout<<s[tempCount]<<endl<<subs[j]<<endl;
                    tempCount++;
                }
            }
        }
        if(flag)
        {
            return true;
            break;
        }
    }
}

int main()
{
    string s;
    cout<<"\n\nEnter a String: ";
    getline(cin,s);
    string subString;
    cout<<"\n\nEnter a Sub String: ";
    getline(cin,subString);
    if(chack_given_substring_present(s,subString))
    {
        cout<<"\n\nGiven Sub String Present In String";
    }
    else
    {
        cout<<"\n\nGiven Sub String not Exists In String";
    }
}

