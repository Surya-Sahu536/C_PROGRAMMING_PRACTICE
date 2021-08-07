/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
void palln(char str[30],int i)
{
    int j=strlen(str)-i-1;
    if(str[i]==str[j])
    {
        if(i+1==j||i==j)
        {
            printf("\npallidrone");
            return;
        }
        palln(str,i+1);
    }
    else 
        printf("\nnot pallidrone");
}
int main()
{
    char str[30];
    int chk;
    printf("enter the string  ");
    scanf("%s",str);
    printf("%s",str);
    palln(str,0);

    return 0;
}
