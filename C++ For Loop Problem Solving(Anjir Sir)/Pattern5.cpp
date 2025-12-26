/*#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<<"Input number of rows: ";
   cin>>n;
   for(int i=1; i<=n; i++)
   {
       cout<<endl<<endl;
       for(int j=i; j<=n; j++)
       {
           cout<<j;
       }
   }
}*/

/*#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<<"Input number of rows: ";
   cin>>n;
   for(int i=n; i>0; i--)
   {
       cout<<endl<<endl;
       for(int j=i; j<n; j++)
       {
           cout<<" ";
       }
       for(int j=1; j<=i; j++)
       {
           cout<<j<<" ";
       }
       for(int j=i; j<n-1; j++)
       {
           cout<<" ";
       }
   }
}*/

#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<<"Input number of rows: ";
   cin>>n;
   for(int i=1; i<=n; i++)
   {
       cout<<endl<<endl;
       for(int j=i; j<n; j++)
       {
           cout<<" ";
       }
       for(int j=i; j>=1; j--)
       {
           cout<<j<<" ";
       }
       for(int j=i; j<n-1; j++)
       {
           cout<<" ";
       }
   }
}
