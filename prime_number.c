/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
    int num,i;
    printf("enter the number  ");
    scanf("%d",&num);
    if(num==1)
       printf("unique no");
    else if(num==2)
       printf("prime no");
    else
    {
     for(i=2;i<num;i++)
     {
       if(num%i==0) 
       {
           printf("not a prime");
           return 0;
       }
     }
     printf("prime no");
    }
    
    return 0;
}
