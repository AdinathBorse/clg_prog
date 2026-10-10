#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,found;
    char name[20][20],str[20];
    printf("enter the no of students");
    scanf("%d",&n);
    printf("enter the names");
    for(i=0;i<n;i++)
    {
        scanf("%s",name[i]);
    }
    printf("enter the name of search\n");
    scanf("%s",str);
    for(i=0;i<n;i++)
    {
        if(strcmp(name[i],str)==0)
        {
            printf("%s is found at a position %d\n",str,i);
            found=1;
            break;    
        }
    } 
    if(found=0)
    {
        printf("%s is not present in list",str);
    }   
    return 0; 
}