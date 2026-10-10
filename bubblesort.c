#include<stdio.h>

void bubblesort(int *a, int n)
{
    int temp;
    for(int i=0; i<n-1; i++) // for no. of passes
    {
        for(int j=0; j<n-1-i; j++) // for no. of comparisons in each pass
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }   
        }
    }
}

int main()
{
    int a[100], n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    bubblesort(a, n);
    printf("Sorted array: \n");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}