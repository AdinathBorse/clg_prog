#include<stdio.h>
void sentinelsearch(int a[],int n,int key)
{
    int i=0;
    a[n]==key;
    while(a[i] != key)
    {
        i++;
    }
    if(i<n)
    {
        printf("element found at %d position ",i+1);
    }
    else
    {
        printf("element is not found \n");
    }

}
int main() {
    int a[100], i, n, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]); 
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
   sentinelsearch(a, n, key);
    return 0;
}