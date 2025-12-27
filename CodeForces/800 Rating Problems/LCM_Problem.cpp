#include<bits/stdc++.h>

using namespace std;

bool LCM(int x,int y,int l,int r)
{
    //cout<<x<<" "<<y<<endl;
    int gcd = 1;
    for(int i=2; i<=x; i++)
    {
        if(x%i == 0 && y%i == 0)
        {
            gcd = i;
        }
    }
    int lcm = (x*y)/gcd;
    //cout<<lcm<<endl;
    if(lcm>=l && lcm<=r) return true;
    return false;
}

int main()
{
    int testCase,l,r;
    cin>>testCase;

    while(testCase--)
    {
        cin>>l>>r;
        bool flag = false;
        for(int i=l; i<r; i++){
            for(int j = i+1; j<=r; j++){
              if(LCM(i,j,l,r))
             {
               cout<<i<<" "<<j<<endl;
               flag = true;
               break; 
             }
          }
          if(flag) break;
        }
        if(!flag)  cout<<"-1"<<" -1"<<endl;
    }
}