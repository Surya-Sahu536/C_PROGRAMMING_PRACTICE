/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,*i,*j,*k,*l,*m,**p,**q,**r;
   // int &z;                               //error
   // int *(&y);                            //error
   a=5;
   b=6;
   c=7;
   d=8;
   printf("%d %d %d %d\n",a,b,c,d);              //5 6 7 8
   i=&a;
   j=&b;
   k=&c;
   printf("%d %d %d\n",*i,*j,*k);                //5 6 7
   printf("%d %d %d\n",i,j,k);                      //-1047412396 -1047412392 -1047412388
   printf("%p %p %p\n",i,j,k);                      //0x7ffd59bbaaf4 0x7ffd59bbaaf8 0x7ffd59bbaafc
   printf("%p %p %p\n",&(*i),&(*j),&(*k));
   printf("%p %p %p\n",&a,&b,&c);
   printf("%d %d %d\n",&a,&b,&c);
   printf("%d \n",&i);                              //-1446517496
   e=*i;
   printf("%d %p %p\n",e,&e,&(*i));                                //5
   f=e;
   printf("%p %p\n",&e,&f);
   l=i;
   printf("%p %p %d %d %p %p\n",i,l,*i,*l,&i,&l);
   p=&i;
   q=&(&a);
   printf("%p %p",p,q);
   printf("%p %p %p %p %d %d",*p,*q,i,&a);
   printf("%d %d %d %d %d %d",*(*p),*(*q),*i,*(&a),a);
    return 0;
}
