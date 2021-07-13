/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void fibonaci(int i,int n)
{
    if(i<n)
    {
        i=i+fibonaci(i,n);
        print("%d",i);
        return i;
    }
    else 
     return 0;
}
int main()
{
    int n;
    printf("fibonaccci series upto  ");
    scanf("%d",&n);
    fibonaci(1,n);

    return 0;
}
