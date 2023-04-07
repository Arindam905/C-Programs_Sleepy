#include <stdio.h>
#include <stdlib.h>

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
void inputDataInFile(int i)
{   
    FILE *fptr;
    
    fptr = fopen("employeeData.dat","a");
        if (fptr == NULL)
        {
            printf("\nError opening file for writing.\n");
            exit(0);
        }
    
    employee e[n];

    printf("\nEnter the ID of the Employee: ");
    scanf(" %d",&e[i].id);
    fprintf(fptr,"%d",e[i].id);

    printf("\nEnter the AGE of the Emplotee: ");
    scanf(" %d",&e[i].age);
    fprintf(fptr, "%d",e[i].age);

    printf("\nEnter the SALARY of the Employee: ");
    scanf(" %d",&e[i].salary);
    fprintf(fptr, "%d",e[i].salary);

    printf("\nEnter the NAME of the Employee: ");
    scanf(" %s",e[i].name);
    fprintf(fptr, "%s",e[i].name);
    
    printf("\nEnter the DESIGNATION of the Employee: ");
    scanf(" %s",e[i].designation);
    fprintf(fptr, "%s",e[i].designation);

    printf("\nEnter the DEPARTMENT of the Employee: ");
    scanf(" %s",e[i].department);
    fprintf(fptr, "%s",e[i].department);
}

//uncomment this main function and comment the other main function, if u want to store the employee data in a .dat file

/*
int main()
{
    int i;
    char ch;

    printf("Do you want to store the data in a file? (Y/N)\n");
    scanf("%s",&ch);

    if (ch == 'N' || ch == 'n')
    {
        printf("How many employee data you want to feed right now? (answer in int)\n");
        scanf(" %d",&n);
    

        for (int i = 1; i <= n; i++)
            {
                printf("\nYou are inputing the data of Employee %d \n",i);
                inputData(i);
            }
    }else if (ch == 'Y' || ch == 'y')
    {
            printf("How many employee data un want to feed right now? (answer in int)\n");
        scanf(" %d",&n);

    for (int i = 1; i <= n; i++)
        {
            printf("\nYou are inputing the data of Employee %d \n",i);
            inputDataInFile(i);
        }
       
    }else
    {
        printf("Wrong input!!");
        exit(0);
    }

    return (0);
}
*/
int main()
{
    int i;

    printf("How many employee data you want to feed right now? (answer in int)\n");
    scanf(" %d",&n);
    

    for (int i = 1; i <= n; i++)
    {
        printf("\nYou are inputing the data of Employee %d \n",i);
        inputData(i);
    }

    return(0);
}