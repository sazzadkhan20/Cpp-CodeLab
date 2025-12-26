#include <iostream>

using namespace std;

int main()
{
    char str[1000];
    cout<<"Input a string: ";
    gets(str);
    int counter=0;
    int i=0;
    while(str[i]!='\0')
    {
        counter++;
        i++;
    }
    cout<<endl<<endl<<"The string contains "<<counter<<" number of characters"<<endl<<endl<<"So, The Length of the string "<<str<<" is: "<<counter<<endl<<endl;
}
