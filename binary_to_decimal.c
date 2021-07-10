/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
int main()
{
    int num,i,rem,dec=0,c=0;
    printf("enter the binary equivalent  ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        dec=dec+rem*(pow(2,c));
        c++;
        num=(num-rem)/10;
    }
    printf("decimal equivalent is %d ",dec);
    return 0;
}
