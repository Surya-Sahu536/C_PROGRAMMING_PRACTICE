/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//enter elements from last to alternative starting

#include <stdio.h>

int main()
{
    int i,n,temp,arr[20];
    printf("Enter the no of elements  ");
    scanf("%d",&n);
    printf("Ener the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=arr[2*i+1];
        arr[2*i+1]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
