/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int fact(int fc,int n)
{
    if(n>1)
    {
        fc=n*(n-1);
        n=fact(fc,n);
        return n-1; 
    }
    else 
     return fc;
}
int main()
{
    int n;
    printf("factorial of  ");
    scanf("%d",&n);
    fc=fact(1,n);
    printf("\n%d",fc);

    return 0;
}
