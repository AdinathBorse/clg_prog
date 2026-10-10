#include<stdio.h>
#include<string.h>
int lengthstr(char *str)
{
int len=0;
while(str[len]!= '\0')
len++;
return len;
}
int main()
{
    char str[100];
    int length;
    printf("enter the string :");
    fgets(str,sizeof(str), stdin );
    length=lengthstr(str);
    printf("length of string is %d\n",length);
    return 0;
}
