//Vul Ase Code[Not Acceptable]

#include<iostream>

using namespace std;
int elementCount = 0;

string  split(string s,char delimiter)
{
    string s1 = "";
    string strarr[100];
   for(int i=0; i<s.length(); i++)
   {
      if(s[i]==delimiter || i==s.length()-1)
      {
          if(i==s.length()-1 && s[i]!=delimiter)
          {
              s1+=s[i];
              strarr[elementCount] = s1;
              elementCount++;
              s1 = "";
          }
          else
          {
              strarr[elementCount] = s1;
              elementCount++;
              s1 = "";
          }
      }
      else
      {
          s1+=s[i];
      }
   }
   return strarr;
}

int main()
{
    string s ;
    cout<<"\n\nEnter a String: ";
    getline(cin,s);
    string splitstrings[100] = split(s,'/');

    cout<<"\n\nSplit Strings are: \n\n";
    //cout<<elementCount<<endl;
    for(int i=0; i<elementCount; i++)
    {
        cout<<splitstrings[i]<<endl;
    }
}


/*#include<iostream>

using namespace std;
int main()
{
    int a =5;
    int *p = &a;
    *p =10;
    cout<<*p<<endl<<a<<endl;
}*/

