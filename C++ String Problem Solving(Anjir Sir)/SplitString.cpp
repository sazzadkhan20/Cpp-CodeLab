#include<iostream>
#include<vector>

using namespace std;

vector <string> split(string s,char delimiter)
{
    vector <string> splitString;
    string s1 = "";
   for(int i=0; i<s.length(); i++)
   {
      if(s[i]==delimiter || i==s.length()-1)
      {
        splitString.push_back(s1);
        s1 = "";
      }
      else
      {
          s1+=s[i];
      }
   }
   return splitString;
}

int main()
{
    string s ;
    cout<<"\n\nEnter a String: ";
    getline(cin,s);
    vector <string> splitstrings = split(s,'/');
    cout<<"\n\nSplit Strings are: \n\n";
    for(string str : splitstrings)
    {
        cout<<str<<endl;
    }
}

//Another Process
/*
#include<iostream>
#include<vector>

using namespace std;

void split(string s,char delimiter,vector <string> &splitString)
{
    //vector <string> splitString;
    string s1 = "";
   for(int i=0; i<s.length(); i++)
   {
      if(s[i]==delimiter || i==s.length()-1)
      {
        splitString.push_back(s1);
        s1 = "";
      }
      else
      {
          s1+=s[i];
      }
   }
   //return splitString;
}

int main()
{
    string s ;
    cout<<"\n\nEnter a String: ";
    getline(cin,s);
    vector <string> splitString ;
     split(s,'/',splitString);
    cout<<"\n\nSplit Strings are: \n\n";

    for(string str : splitString)
    {
        cout<<str<<endl;
    }
}

*/
