#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    for(int i=0; i<50; i++)
    {
        int randomNumber = rand()%10000+10000;
   cout<<"\n\nRandom Number "<<i+1<<": "<<randomNumber<<endl;
    }
}

