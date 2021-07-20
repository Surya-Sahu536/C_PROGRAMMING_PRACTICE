/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void display(int arr[],int n,int j)
{
    if(j==n)
        return;
    else
    {
        printf("%d ",arr[j]);
        display(arr,n,++j);
    }
}

void palln(int arr[],int n,int j)
{
    if(j>n)
    {
        printf("\npallidrone");
        return;
    }
    else
    {
        if(arr[j]!=arr[n-1])
        {
            printf("\nnot a pallidrone");
            return;
        }
        else
            palln(arr,n-1,j+1);
    }
}

int main()
{
    int n,i,arr[50];
    printf("enter the no of elements  ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    display(arr,n,0);
    palln(arr,n,0);
    return 0;
}
