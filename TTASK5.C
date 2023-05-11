#include<stdio.h>
#include<conio.h>
main()
{
    int bs,hra,da,ta,gs;
    clrscr();
    printf("enter base salary=");
    scanf("%d",&bs);
    hra=bs*15/100;
    da=bs*7/100;
    ta=bs*9/100;
    gs=bs+hra+da+ta;
    printf("gross salary :%d",gs);
    getch();
    }