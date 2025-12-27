#include<bits/stdc++.h>

using namespace std;

int search_substring(string s,string sub)
{
    int count = 0;
   
      auto it = find(s.begin(),s.end(),sub);
      //if(it != s.end()) count++;
      cout<<*it;
      //else break;
      //replace(s.begin(),s.end(),sub,"");
    
}

int main()
{
    int n;
    cin>>n;
    string s = to_string(n);
    int sz = s.size();
    //int count = search_substring(s,"144");
    //count += search_substring(s,"14");
    //count += search_substring(s,"1");

    // if(sz == count) cout<<"YES\n"<<endl;
    // else  cout<<"NO"<<endl;
    search_substring(s,"14");
}