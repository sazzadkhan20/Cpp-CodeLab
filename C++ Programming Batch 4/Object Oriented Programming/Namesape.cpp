#include<bits/stdc++.h>

using namespace std;

namespace rakib
{
    int age = 40;

    void hello()
    {
        cout<<"Rakib Namespace"<<endl;
    }
    /*
    Class Person
    {

    };*/
}

namespace sakib
{
    int age = 45;

    void hello()
    {
        cout<<"Sakib Namespace"<<endl;
    }
}

using namespace rakib;
using namespace sakib;

int main()
{
    cout<<rakib::age<<endl;
    cout<<sakib::age<<endl;
    rakib::hello();
}