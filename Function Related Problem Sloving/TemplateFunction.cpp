
#include<iostream>

using namespace std;

template <class myTemplate1,class myTemplate2>

myTemplate1 addition(myTemplate1 a,myTemplate2 b)
{
    return a+b;
}

int main()
{
   cout<<addition(35.5,10)<<endl;
   //cout<<addition(35.5,10.3)<<endl;
}

/*#include<iostream>

using namespace std;

template <class myTemplate>
void addition(myTemplate a,myTemplate b)
{
    cout<< a+b;
}

int main()
{
     addition(35,10);
   //cout<<addition(35,10)<<endl;
   //cout<<addition(35.5,10.3)<<endl;
}*/

