#include<iostream>

using  namespace std;

int main()
{
   int x = 10;
   int *p1 = &x;
   //p1 = &x; //another way
   //*p1 = x //problematic scenario
   cout<<p1<<"\n"<<*p1<<"\n";
   //*p1++;
   //cout<<x<<"\n";
   int **p2 = &p1;
   cout<<&p1<<"\n";
   cout<<p2<<"\n"<<*p2<<"\n"<<**p2<<"\n";
   int ***p3 = &p2;
   /*int *p3 = *p2; //*p3 = &x; //*p3 = p1;*/
   cout<<&p2<<"\n";
   cout<<p3<<"\n"<<*p3<<"\n"<<**p3<<"\n"<<***p3<<"\n";
   *p1++;
   cout<<p1<<"\n";
   cout<<x<<"\n";
   cout<<*p1<<"\n";
   cout<<p3<<"\n"<<*p3<<"\n"<<**p3<<"\n"<<***p3<<"\n";
}
