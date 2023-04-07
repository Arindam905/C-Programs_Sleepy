#include <stdio.h>

int n;

typedef struct Employee
    {
        int id,
            age,
            salary;
        char name[30],
             designation[50],
             department[50];
    }employee;

void inputData(int i)
{
    employee e[n];

    printf("\nEnter the ID of the Employee: ");
    scanf(" %d",&e[i].id);

    printf("\nEnter the AGE of the Emplotee: ");
    scanf(" %d",&e[i].age);

    printf("\nEnter the SALARY of the Employee: ");
    scanf(" %d",&e[i].salary);

    printf("\nEnter the NAME of the Employee: ");
    scanf(" %s",e[i].name);
    
    printf("\nEnter the DESIGNATION of the Employee: ");
    scanf(" %s",e[i].designation);

    printf("\nEnter the DEPARTMENT of the Employee: ");
    scanf(" %s",e[i].department);
}
int main()
{
    int i;

    printf("How many employee data un want to feed right now? (answer in int)\n");
    scanf(" %d",&n);
    

    for (int i = 1; i <= n; i++)
    {
        printf("\nYou are inputing the data of Employee %d",i);
        inputData(i);
    }
    
    return (0);
}