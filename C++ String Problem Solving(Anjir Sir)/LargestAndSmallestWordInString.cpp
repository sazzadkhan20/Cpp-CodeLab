#include<iostream>

using namespace std;

int main()
{
    string s;
    cout<<"\n\nEnter a String: ";
    getline(cin,s);
    /*for(int i=0; i<s.length(); i++)
    {
        if(s[i]==' ')
        {
            s[i]='*';
        }
    }
    cout<<"\n\nOutput is: "<<s<<endl;*/
    string tempWord = "";
    string largestWord = "";
    string lowestWord = "";
    int largestWordCount = 0;
    int lowestWordCount = 5;
    bool flag = false;
    s+=' ';
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]==32)
        {
            flag = true;
          if(largestWordCount<tempWord.length())
          {
              largestWord = tempWord;
              largestWordCount = tempWord.length();
          }
         if(lowestWordCount>tempWord.length())
          {
              lowestWord = tempWord;
              lowestWordCount = tempWord.length();
          }
          tempWord = "";
        }
        else
        {
           tempWord+=s[i];
           if(!flag)
           {
               lowestWordCount++;
               largestWordCount++;
           }
        }
    }
    cout<<"\n\nThe largest word is: "<<largestWord;
    cout<<"\n\nThe lowest word is: "<<lowestWord<<endl;
}



