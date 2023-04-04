#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    float a,b,s;
    printf(" Enter the numbers for operators:");
    printf("\n 1-Add");
    printf("\n 2-Subtract");
    printf("\n 3-Multiply");
    printf("\n 4-Divide");
    printf("\n Enter 1st Number:");
    scanf("%f",&a);
    printf("\n Enter 2nd Number:");
    scanf("%f",&b);
    printf("\n Enter Operator:");
    scanf("%d",&n);
    switch (n)
    {
        case 1:printf(" Sum is=%f",a+b);
        break;
        case 2:printf(" Subtraction is=%f",a-b);
        break;
        case 3:printf(" Multiplication is=%f",a*b);
        break;
        case 4:printf(" Division is=%f",a/b);
        break;
        default:printf("Enter a proper operator!");
    }
    getch();
}
