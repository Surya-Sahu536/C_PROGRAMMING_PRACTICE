/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i=0,j;
    int arr[10];
    scanf("%d",&n);
    while(n!=0)
    {
        arr[i]=n%10;
        i++;
        n=(n-n%10)/10;
        
    }
    for(j=0;j<i/2;j++)
    {
        if(arr[j]!=arr[i-j-1])
        {
            printf("not pallidrone");
            return 0;
        }
    }
    printf("pallidrone");
    return 0;
}
