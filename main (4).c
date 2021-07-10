/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
int main()
{
    int num,i,j,n,sum=0,c=0,rem;
    printf("Enter a no  ");
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        rem=n%10;
        n=(n-rem)/10;
        c++;
    }
    n=num;
    while(n!=0)
    {
        rem=n%10;
        sum+=pow(rem,c);
        n=(n-rem)/10;
    }
    if(num==sum)
    {
        printf("armstrong no");
    }
    else
        printf("not armstrong");
    return 0;
}
