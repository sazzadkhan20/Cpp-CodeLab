#include<bits/stdc++.h>

using namespace std;

class Cricketer
{
   public:
   int jourseyNo;
   char country[100];
   
   void show_info()
   {
     cout<< jourseyNo <<" " << country << endl;
   }
};

int main()
{
    Cricketer *t = new Cricketer;
    t -> jourseyNo = 71;
    char temp[100] = "Bangladesh";
    strcpy(t -> country,temp);

    Cricketer *s =  new Cricketer;
    //s = t;
    s -> jourseyNo = t ->jourseyNo;
    strcpy(s -> country,t ->country);
    s -> show_info();
    delete t;
    s -> show_info();
    delete s;
} 