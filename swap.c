#include<stdio.h>
void swap(int *p1, int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

int main()
{
    int a,b;
    printf("accept a numbers :");
    scanf("%d %d",&a,&b);
    printf("values before swap :a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("values before swap :a=%d and b=%d",a,b);
 return 0;
} 