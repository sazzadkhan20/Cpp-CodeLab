#include<bits/stdc++.h>

using namespace std;

int main(){
    int testCase,n,k;
    cin>>testCase;

    while(testCase--){
        cin>>n>>k;
        vector <int> a(n),b(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        for(int i=0; i<n; i++)
        {
           // bool flag = false;
           if(k < a[i]) break;
            for(int j=0; j<n; j++)
            {
               if(k >= b[j] && b[j]!=0)
               {
                k += b[j];
                b[j] = 0;
                break;
               }
            }
           
        }
       cout<<k<<endl;
    }
}


/* #include<bits/stdc++.h>

using namespace std;

class index
{
    public:
    int val;
    int indexValue;
    index(int val,int indexValue)
    {
        this->val = val;
        this->indexValue = indexValue;
    }

};

bool cmp(index a,index b)
{
    return a.val >= b.val;
}
int main(){
    int testCase,n,k;
    cin>>testCase;

    while(testCase--){
        cin>>n>>k;
        vector <int> a(n),b(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        for(int i=0; i<n; i++)
        {
            bool flag = false;
            for(int j=0; j<n; j++)
            {
               if(k >= a[j] && a[j] != 0)
               {
                a[j] = 0;
                flag = true;
                break;
               }
            }
            if(flag)
            {
                vector <index> v;
                bool flag1 = false;
               for(int j=0; j<n; j++)
               {
                 if(k >= b[j] && b[j] != 0)
                 {
                    flag1 = true;
                    index obj(b[j],j);
                    v.push_back(obj);
                 }
               }
               if(flag1)
               {
                 sort(v.begin(),v.end(),cmp);
                 k += v[0].val;
                 b[v[0].indexValue] = 0;
                 //v.clear();
               }
               else break;
               
            }
        }
       cout<<k<<endl;
    }
}*/