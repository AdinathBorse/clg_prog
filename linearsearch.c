#include<stdio.h>

void linearsearch(int arr[], int n, int key) {
    int i, flag = 0; 
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("number is found at %d position\n", i + 1);
            flag = 1;
        }
    }
    if(flag == 0) {
        printf("number is not found\n");
    }
}

int main() {
    int arr[100], i, n, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    linearsearch(arr, n, key);
    return 0;
}