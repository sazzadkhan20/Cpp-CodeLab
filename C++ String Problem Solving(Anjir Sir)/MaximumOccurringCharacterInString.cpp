#include<iostream>

using namespace std;

int main()
{
   string s;
   cout<<"\n\nEnter a String: ";
   getline(cin,s);
   int characterCount;
   int MaximumOccurringCharacterCount = 1;
   char MaximumOccurringCharacter;
   for(int i=0; i<s.length(); i++)
   {
       characterCount = 0;
       for(int j=i; j<s.length(); j++)
       {
           if(s[i]==s[j])
           {
               characterCount++;
           }
       }
       if(MaximumOccurringCharacterCount<characterCount)
       {
           MaximumOccurringCharacter = s[i];
           MaximumOccurringCharacterCount = characterCount;
       }

   }
   cout<<"\n\nThe Highest frequency of character ' "<<MaximumOccurringCharacter<<" '";
   cout<<"\n\nappears number of times: "<<MaximumOccurringCharacterCount<<endl<<endl;
}
