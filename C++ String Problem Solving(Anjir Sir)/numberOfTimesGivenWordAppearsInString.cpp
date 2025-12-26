#include<iostream>

using namespace std;

int number_of_times_given_word_appears(string s,string subs)
{
    int tempCount;
    int wordCounter =0;
    bool flag = false;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i] = char(s[i]+32);
        }
        if(i<=subs.length()-1 && (subs[i]>='A' && subs[i]<='Z'))
        {
            subs[i] = char(subs[i]+32);
        }
    }

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
        if(flag)
        {
            wordCounter++;
        }
        }
    }
    return wordCounter;
}

int main()
{
    string s;
    cout<<"\n\nEnter a String: ";
    getline(cin,s);
    string subString;
    cout<<"\n\nEnter a Sub String: ";
    getline(cin,subString);
    cout<<"\n\n"<<subString<<" Sub String Repeated In String is: "<<number_of_times_given_word_appears(s,subString);
}


