#include<iostream>

using namespace std;

int main()
{
   char str[1000];
   gets(str);
   for(int i=0; str[i]!='\0'; i++)
   {
       cout<<str[i]<<endl;

   }


}
