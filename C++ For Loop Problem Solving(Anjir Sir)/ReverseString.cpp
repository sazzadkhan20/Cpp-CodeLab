#include<iostream>

using namespace std;

int main()
{
    string line;
    cout<<"Enter a string: ";
    cin>>line;
    cout<<"\n\nThe Reverse order: ";
    for(int i=line.length()-1; i>=0; i--)
    {
        cout<<line[i];
    }

}
