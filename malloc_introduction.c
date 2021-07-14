/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,*ptr,sum=0;
    printf("Enter no of elements ");
    scanf("%d",&n);
    //memory allocation through malloc
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("error memory not aloocated");
        return 0;
    }
    printf("Enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<n;i++)
    {
        sum+=*(ptr+i);
    }
    printf("sum is %d",sum);

    return 0;
}
