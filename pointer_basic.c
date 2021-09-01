/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,*i,*j,*k,*l,*m,*n,**p,**q,**r,**s;
   // int &z;                               //error
   // int *(&y);                            //error
   a=5;
   b=10;
   c=15;
   d=20;
   printf("%d %d %d %d\n",a,b,c,d);              //5 10 15 20
   i=&a;
   j=&b;
   k=&c;
   printf("%d %d %d\n",*i,*j,*k);                //5 10 15
   printf("%d %d %d\n",i,j,k);                      //1035996364 1035996368 1035996372 warning
   printf("%p %p %p\n",i,j,k);                      //0x7ffe3dc00ccc 0x7ffe3dc00cd0 0x7ffe3dc00cd4
   printf("%p %p %p\n",&(*i),&(*j),&(*k));          //0x7ffe3dc00ccc 0x7ffe3dc00cd0 0x7ffe3dc00cd4
   printf("%p %p %p\n",*(&a),*(&b),*(&c));          //0x5 0xa 0xf
   printf("%d %d %d\n",&a,&b,&c);                   //1035996364 1035996368 1035996372 warning
   printf("%d \n",&i);                              //1035996392
   e=*i;
   printf("%d %p %p\n",e,&e,&(*i));                                //5 0x7ffe3dc00cd8 0x7ffe3dc00ccc
   f=e;
   printf("%p %p\n",&e,&f);                             //0x7ffe3dc00cd8 0x7ffe3dc00cdc
   l=i;
   printf("%p %p %d %d %p %p\n",i,l,*i,*l,&i,&l);       //0x7ffe3dc00ccc 0x7ffe3dc00ccc 5 5 0x7ffe3dc00ce8 0x7ffe3dc00cf8
   p=&i;
   // q=&(&a);                                      //error: lvalue required as unary ‘&’ operand
   q=&j;
   printf("%p %p\n",p,q);                           //0x7ffe3dc00ce8 0x7ffe3dc00cf0
   printf("%p %p %p %p \n",*p,*q,i,&a);        //0x7ffe3dc00ccc 0x7ffe3dc00cd0 0x7ffe3dc00ccc 0x7ffe3dc00ccc
   printf("%d %d\n",*p,*q);                     //1035996364 1035996368 warning
   printf("%d %d %d %d\n",*(*p),*i,*(&a),a);    //5 5 5 5
   ++(*i);
   printf("%d\n",a);                                    //6
   g=*(i+1);
   printf("%d\n",g);                                    //10
   //s=&(i+1);                                        //error: lvalue required as unary ‘&’ operand
   m=i+1;
   printf("%p %p %p\n",i,m,j);                          //0x7ffe3dc00ccc 0x7ffe3dc00cd0 0x7ffe3dc00cd0
   printf("%d\n",*m);                                   //10
   r=p+1;
   printf("%p %p %p\n",p,r,q);                          //0x7ffe3dc00ce8 0x7ffe3dc00cf0 0x7ffe3dc00cf0
   n=&c;
   *n=0;
   printf("%d %d\n",c,*n);                              //0 0
   
    return 0;
}
