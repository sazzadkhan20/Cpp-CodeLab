#include<bits/stdc++.h>

using namespace std;

int find_word(string s,string word)
{
    int wordCount = 0;
    for(int i=0; i<s.size(); i++)
    {
       if(s[i] == word[wordCount])
       {
         wordCount++;
         if(word.size() == wordCount)
         {
            return i - wordCount + 1;
         }
       }
       else
       {
         wordCount = 0;
       }
    }
    return -1;
}

void replace_word(string &s,int startingIndex,int numberOfReplacingWord,string word)
{
    string tempWord1 = "";
    string tempWord2 = "";
    if(s.size() <= startingIndex || startingIndex < 0)
    {
        return;
    }
   for(int i=0; i<s.size(); i++)
   {
      if(i < startingIndex)
      {
        tempWord1 += s[i];
      }
      else if(i >= startingIndex+numberOfReplacingWord)
      {
        tempWord2 += s[i];
      }
   }
   s = "";
   s = s + tempWord1 + word + tempWord2;
}
int main()
{
    string s;
    getline(cin,s);
    string word = "EGYPT";
    //replace_word(s,37,1,"pt");

    while(find_word(s,word) != -1)
    {
       replace_word(s,find_word(s,word),5," ");
    } 
    cout<<s<<endl;
    //cout<<find_word(s,"EA")<<endl;
    
    
}