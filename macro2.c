#include<stdio.h>
#include<math.h>
#define sqrt(n) (n*n)
int main()
{
    int n,result;
    printf("enter the number :");    
    scanf("%d",&n);
    result=sqrt(n);
    printf("square of number is %d",result);
    return 0;
}