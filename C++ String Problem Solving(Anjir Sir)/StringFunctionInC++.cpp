#include<iostream>
#include<conio.h>
#include<cctype>

using namespace std;


int main()
{
    string s1 ="Sazzad";
    string s2 ="Khan";
    for(int i=0; i<s1.length(); i++)
    {
        s1[i]=toupper(s1[i]);
    }
    for(int i=0; i<s2.length(); i++)
    {
        s2[i]=tolower(s2[i]);
    }
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s1.compare(s2)<<endl;
    //copy
    s1= s2;
    cout<<s1<<endl;

    getch();
}




/*#include<iostream>
#include<conio.h>
#include<cstring>

using namespace std;


int main()
{
    string s1 ="Sazzad";
    string s2 ="Khan";
    cout<<strlen(s1.c_str())<<endl;
    cout<<strcmp(s1.c_str(),s2.c_str())<<endl;
    cout<<s2<<endl;

    getch();
}
*/

