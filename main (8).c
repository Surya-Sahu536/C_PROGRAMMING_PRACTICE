/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1,num2,i,j,lcm;
    printf("Enter 2 nos  ");
    scanf("%d %d",&num1,&num2);
    lcm=num1*num2;
    for(i=(num1<num2?num2:num1);i<=num1*num2;i++)
    {
        if(i%num1==0&&i%num2==0)
        {
          lcm=i;
          break;
        }
    }
    printf("LCM is %d",lcm);

    return 0;
}
