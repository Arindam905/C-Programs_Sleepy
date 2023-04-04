#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[10],*p;
    p=a;
    int L,i;
    printf("Enter Name:");
    gets(a);
    L=strlen(p);
    p=p+(L-1);
    for(i=1;i<=L;i++,p--)
    {
        printf("%c",*p);
    }
    getch();
}
