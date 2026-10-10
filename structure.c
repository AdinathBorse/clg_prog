#include<stdio.h>
struct Emp 
{
    int id;
    char name[50];
    float salary;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Emp emp[n];

    for(int i = 0; i < n; i++) {
        printf("\nInput details for Employee %d:\n", i+1);
        printf("Employee ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    printf("\n===Summary of Employee Details===\n");
    for(int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i+1);
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
    }

    return 0;
}