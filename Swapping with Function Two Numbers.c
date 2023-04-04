#include<stdio.h>
#include<conio.h>
swap(int*a,int*b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
void main()
{
    int a,b;
    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d%d",a,b);
    getch();
}
