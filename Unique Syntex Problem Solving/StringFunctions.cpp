#include<iostream>
#include<conio.h>
#include<cstring>

using namespace std;


int main()
{
    char c1[] ="Sazzad";
    char c2[] ="Khan";
    cout<<strlen(c1)<<endl;
    cout<<strupr(c1)<<endl;
    cout<<c1<<endl;
    cout<<strlwr(c2)<<endl;
    cout<<c2<<endl;
    cout<<strcpy(c1,strupr(c2))<<endl;
    cout<<c1<<endl;
    cout<<strcmp(c1,strlwr(c2))<<endl;
    cout<<c2<<endl;

    getch();
}



/*#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cstring>

using namespace std;


int main()
{
    //char c [6] ={'h','e','l','l','o'};
    //char c [] ={'h','e','l','l','o','\0'};
     char c[0];
     gets(c);
     //cout<<c<<endl;
     //cout<<strlen(c);

    getch();
}
*/
