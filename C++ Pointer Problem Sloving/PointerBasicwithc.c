#include<stdio.h>
#include<string.h>

void func(char *cr)
{
   for(int i=0; i<strlen(cr); i++)
   {
       printf("%c\n",cr[i]);
   }
}

int main()
{
    char c[20] ="Hello";
    func(c);
   /*int x = 10;
   int *ptr;
   ptr = &x;
   //*ptr = x;
   printf("%p\n%d\n",ptr,*ptr);
   printf("%d\n",sizeof(ptr));
   double y = 10.02;
   double *ptr2;
   //ptr2 = &y;
   *ptr2 = y;
   printf("%p\n%0.2lf\n",ptr2,*ptr2);
   printf("%d\n",sizeof(ptr2));*/
}

