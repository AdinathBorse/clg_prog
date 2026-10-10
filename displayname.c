#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char name[20][20];
    printf("enter the no of students");
    scanf("%d",&n);
    printf("enter the names");
    for(i=0;i<n;i++)
    {
        scanf("%s",name[i]);
    }
    printf("name of all students\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0; 
}