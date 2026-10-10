#include<stdio.h>
#define max(a,b) (a>b ? a:b)
main(){
    int a,b,result;
    printf("enter the numbers :");
    scanf("%d%d",&a,&b);
    result=max(a,b);
    printf("maximum number is %d\n",result);
}