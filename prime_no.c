/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,i,fact=1;
    printf("enter a no ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact*=i;
    }
    printf("%d",fact);
    return 0;
}
