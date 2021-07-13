/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int fact(int n)
{
    if(n>=1)
        return n*fact(n-1); 
    else 
     return 1;
}
int main()
{
    int n;
    printf("factorial of  ");
    scanf("%d",&n);
    printf("\n%d",fact(n));
    return 0;
}
