#include <stdio.h>
#include <stdlib.h>

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        quickSort(arr, low, i);
        quickSort(arr, i + 2, high);
    }
}

int main() {
    int i,n,arr[100];
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    printf("enter the array element");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("elment before sorting  ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    quickSort(arr, 0, n - 1);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}