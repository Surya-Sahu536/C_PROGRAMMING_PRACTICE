/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//enter 2nd half elements in between first
//1 2 3 4 5 6 7 8 9 0
//1 0 2 9 3 8 4 7 5 6 
#include <stdio.h>

int main()
{
    int i,n,temp,arr[20],brr[20];
    printf("Enter the no of elements  ");
    scanf("%d",&n);
    printf("Ener the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<(n+1)/2;i++)
    {
        brr[2*i+1]=arr[n-i-1];
        brr[2*i]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",brr[i]);
    }

    return 0;
}
