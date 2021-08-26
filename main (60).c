/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void recur(int a)
{
    if(a<=0)
        printf("\n%d ended",a);
    else
    {
        printf("\n%d",a);
        recur(--a);
        printf("\n%d",a);
    }
}

int rec1(int a)
{
    if(a<=0)
    {
        printf("\n-%d- ended",a);
        return 0;
    }
    else
    {
        printf("\n-%d-",a);
        rec1(--a);
        printf("\n-%d-",a);
    }
}

int rec2(int a)
{
    if(a<=0)
    {
        printf("\n--%d-- ended",a);
        return 0;
    }
    else
    {
        printf("\n--%d--",rec2(--a));
        return a;
    }
}

int rec3(int a)
{
    if(a<=0)
    {
        printf("\n%d ended",a);
        return 0;
    }
    else
    {
        printf("\ns%d",a);
        a=rec3(--a)+rec3(--a);
        printf("\nt%d",a);
        return a;
    }
}

int main()
{
    int num,r;
    printf("enter a no  ");
    scanf("%d",&num);
    recur(num);
    printf("\n");
    rec1(4);
    printf("\n");
    r=rec2(6);
    printf("\n");
    r=rec3(6);
    return 0;
}
