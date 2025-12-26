#include<iostream>

using namespace std;

int main()
{
   string s;
   cout<<"\n\nEnter a String: ";
   getline(cin,s);
   int indexCount,indexElement;
   for(int i=0; i<s.length(); i++)
   {
       indexElement = int(s[i]);
       indexCount = i;
       for(int j=i; j<s.length(); j++)
       {
           if(indexElement>int(s[j]))
           {
               indexElement = s[j];
               indexCount = j;
           }
       }
       s[indexCount] = s[i];
       s[i] = indexElement;
   }
   cout<<"\n\nAfter sorting the string appears like: "<<s;
}
