/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int n,i,j,len;
    printf("enter the string  ");
    scanf("%s",str);
    len=strlen(str);
    for(i=0,j=len-1;i<len/2;i++,j--)
        if(str[i]!=str[j])
        {
            printf("not pallidrone");
            return 0;
        }
    printf("pallidrone");
    return 0;
}
