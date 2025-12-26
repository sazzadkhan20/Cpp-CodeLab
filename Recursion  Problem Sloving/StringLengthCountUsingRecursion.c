#include<stdio.h>

int string_length_count(char *str,int i)
{
    if(str[i]=='\0')
    {
        return 0;
    }
    int l =1+string_length_count(str,i+1);
    return l;
}


int main()
{
    char str[20]= "Hello Gello";
    int length = string_length_count(str,0);
    printf("String Length is-%d\n",length);

}
