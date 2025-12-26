#include<iostream>

using namespace std;
void voidPointer(void *data,int sz)
{
    if(sz == sizeof(int))
    {
        int *p;
        p = (int *) data;
        ++*p;
    }
    else if(sz == sizeof(char))
    {
       char *c;
       c = (char *) data;
       ++*c;
    }
}

int main()
{
    int a=10;
    char b='c';
    voidPointer(&a,sizeof(int));
    voidPointer(&b,sizeof(char));
    cout<<a<<"  "<<b<<endl;
    //Null Pointer
    int *p;
    p = 0;//p = NULL;
    cout<<p<<"\n";
    cout<<&p<<"\n";

}
