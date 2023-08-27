#include <stdio.h>
#include <string.h>
#include<conio.h>
struct Employee {
    char name[50];
    int employeeID;
    float experience;
    float salary;
};

int main() {
    struct Employee employees[5];
    clrscr();
    for (int i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);

        printf("Experience (in years): ");
        scanf("%f", &employees[i].experience);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("\n");
    }
    printf("Employee Details:\n");

    for (int i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Employee ID: %d\n", employees[i].employeeID);
        printf("Experience: %.2f years\n", employees[i].experience);
        printf("Salary: $%.2f\n", employees[i].salary);
        printf("\n");
    }

    return 0;
}
