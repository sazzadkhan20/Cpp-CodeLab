#include <iostream>
#include "myfristclass.h"

using namespace std;

int main()
{
   const MyFristClass ob1;
   MyFristClass ob2(1,2);
   ob2.display2();
   const MyFristClass *p = &ob1;
   p->display1();

}
