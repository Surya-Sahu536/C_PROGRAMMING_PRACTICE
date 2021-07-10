/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
int main()
{
    int num,i,rem,bin=0,c=0;
    printf("enter the decimal equivalent  ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%2;
        bin=bin+rem*(pow(10,c));
        c++;
        num=(num-rem)/2;
    }
    printf("binary equivalent is %d",bin);
    return 0;
}
