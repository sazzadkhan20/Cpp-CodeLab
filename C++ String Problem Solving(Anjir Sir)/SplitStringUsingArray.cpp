#include<iostream>

using namespace std;

void  split(string s,char delimiter,string splitString[],int &elementCount)
{
    string s1 = "";
   for(int i=0; i<s.length(); i++)
   {
      if(s[i]==delimiter || i==s.length()-1)
      {
          if(i==s.length()-1 && s[i]!=delimiter)
          {
              s1+=s[i];
              splitString[elementCount] = s1;
              elementCount++;
              s1 = "";
          }
          else
          {
              splitString[elementCount] = s1;
              elementCount++;
              s1 = "";
          }
      }
      else
      {
          s1+=s[i];
      }
   }
}

int main()
{
    string s ;
    cout<<"\n\nEnter a String: ";
    getline(cin,s);
    string splitstrings[100];
    int elementCount = 0;
    split(s,'/',splitstrings,elementCount);
    cout<<"\n\nSplit Strings are: \n\n";
    //cout<<elementCount<<endl;
    for(int i=0; i<elementCount; i++)
    {
        cout<<splitstrings[i]<<endl;
    }
}

//Another Process----

/*#include<iostream>

using namespace std;
int elementCount = 0;

void  split(string s,char delimiter,string (&splitString)[100])
{
    string s1 = "";
   for(int i=0; i<s.length(); i++)
   {
      if(s[i]==delimiter || i==s.length()-1)
      {
          if(i==s.length()-1 && s[i]!=delimiter)
          {
              s1+=s[i];
              splitString[elementCount] = s1;
              elementCount++;
              s1 = "";
          }
          else
          {
              splitString[elementCount] = s1;
              elementCount++;
              s1 = "";
          }
      }
      else
      {
          s1+=s[i];
      }
   }
}

int main()
{
    string s ;
    cout<<"\n\nEnter a String: ";
    getline(cin,s);
    string splitstrings[100];
    split(s,'/',splitstrings);
    cout<<"\n\nSplit Strings are: \n\n";
    cout<<elementCount<<endl;
    for(int i=0; i<elementCount; i++)
    {
        cout<<splitstrings[i]<<endl;
    }
}
*/

