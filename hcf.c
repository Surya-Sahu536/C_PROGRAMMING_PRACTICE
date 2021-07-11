/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1,num2,i,j,hcf=1;
    printf("Enter 2 nos  ");
    scanf("%d %d",&num1,&num2);
    for(i=1;i<=(num1>num2?num2:num1);i++)
    {
        if(num1%i==0&&num2%i==0)
          hcf=i;
    }
    printf("HCF is %d",hcf);

    return 0;
}
