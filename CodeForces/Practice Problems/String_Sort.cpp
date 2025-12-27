#include<bits/stdc++.h>

using namespace std;

int compare_string(string s1,string s2)
{
   for(int i=0; i<s1.size(); i++)
   {
     if(s1[i]>='A' && s1[i]<='Z')
     {
        s1[i] = s1[i] + 32;
     }
   }
    for(int i=0; i<s2.size(); i++)
   {
     if(s2[i]>='A' && s2[i]<='Z')
     {
        s2[i] = s2[i] + 32;
     }
   }
   int i = 0;
   while(i<s1.size() || i<s2.size())
   {
    if(s1[i] == '\0')
    {
        return -1;
    }
    if(s2[i] == '\0')
    {
        return 0;
    }
     if(s1[i] == s2[i])
     {
        i++;
     }
     else if(s1[i] > s2[i])
        return 0;
     else
        return -1;
   }
   return 1;

}

void selection_sort(string *s,int n)
{
   int index;
   string s1;

   for(int i=0; i<n; i++)
   {
      index = i;
      s1 = s[i];

      for(int j=i+1; j<n; j++)
      {
         if(compare_string(s1,s[j]) == 0)
         {
            index = j;
            s1 = s[j];
         }

      }
      string temp = s[i];
      s[i] = s1;
      s[index] = temp;

   }
}

int main()
{
    int n;
    cin>>n;
    string s[n];
    cin.ignore();
    for(int i=0; i<n; i++)
   {
      getline(cin,s[i]);
   }
   selection_sort(s,n);
   cout<<"Sorted Strings are : \n\n";
    for(int i=0; i<n; i++)
   {
      cout<<s[i]<<endl;
   }

}