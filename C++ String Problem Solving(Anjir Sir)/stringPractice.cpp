#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout<<"\n\nEnter a String : ";
    int a;
    while((a=getchar())!='0')
    {
        s+=char(a);
    }
    cout<<"\n\nString is: "<<s;
}

