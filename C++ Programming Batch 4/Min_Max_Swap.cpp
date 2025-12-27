#include<iostream>
#include<algorithm>
#include<utility>

/*int swap_fun(int *a,int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}*/

using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mn = min({a,b,c,d});
    int mx = max({a,b,c,d});
    cout<<mx<<" "<<mn<<endl;
    //swap_fun(&a,&b);
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}