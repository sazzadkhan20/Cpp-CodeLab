#include<bits/stdc++.h>

using namespace std;

int sub_string_check(string s)
{
    int count = 0;
   for(int i=0; i<s.length(); i++)
   {
     if(s[i] == 'x')  count++;
     else  count = 0;
     if(count == 3)  return i;
   }
   return 0;
}

int number_of_char_remove(string s,int count)
{
    if(sub_string_check(s) == 0) return count;
    
    string s1 = "";
    int length = sub_string_check(s);
    for(int i=0; i<length; i++)
    {
        s1 += s[i];
    }
    for(int i=length+1; i<s.length(); i++)
    {
        s1 += s[i];
    }
    count++;
    return number_of_char_remove(s1,count);
}


int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count = 0;
    cout<<number_of_char_remove(s,count)<<endl;
}