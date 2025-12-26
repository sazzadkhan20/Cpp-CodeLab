#include<iostream>

#include<string.h>

using namespace std;

int main()
{
    char str[1200];
    gets(str);

   int l= strlen(str);
   cout<<"Length: "<<l;
}
