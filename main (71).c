/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   // printf("Hello World");
   int a,b,c,d,e,f;
   a=b=5;
   printf("%d %d\n",a,b);                              // 5 5
   //c=!d=5;                                         error: lvalue required as left operand of assignment
   //c=~d=5;                                           error: lvalue required as left operand of assignment
   c=d!=5;                                                  //1 -1287536608
   printf("%d %d\n",c,d);
   //!d=6;                                                error: lvalue required as left operand of assignment
   //c=d~=5;                                            error: expected â€˜;â€™ before â€˜~â€™ token
   d=3;
   c=d|=5;
   printf("%d %d\n",c,d);                               //7 7
   c=d&=5;
   printf("%d %d\n",c,d);                               //5 5
   c=d^=10;
   printf("%d %d\n",c,d);                                 //15 15
   e=5; f=7;
   e^=f^=e^=f;
   printf("%d %d\n",e,f);                                   //7 5
    return 0;
}
