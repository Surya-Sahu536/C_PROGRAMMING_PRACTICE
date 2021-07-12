/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,n,c,arr[20];
    printf("Enter the no of elements  ");
    scanf("%d",&n);
    printf("Ener the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        if(arr[i]=='\0')
          continue;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                arr[j]='\0';
            }
        }
        printf("%d having occurrence %d times \n",arr[i],c);
    }

    return 0;
}
