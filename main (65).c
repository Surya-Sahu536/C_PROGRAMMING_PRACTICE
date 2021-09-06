/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[10];
    arr[0]=1;
    arr[1]=3;
    arr[2]=5;
    printf("%d %d %d\n",arr[0],arr[1],arr[2]);    //1 3 5
    printf("%d %d\n",arr[0],*arr);                  //1 1
    printf("%d\n",arr);
    printf("%p %p %p %p\n",arr,&arr,&arr[0],arr[0]);
    // arr=6;                                  //error
    *arr=8;                            
    printf("%d\n",arr[0]);                            //8
    printf("%d %d %d %d\n",arr[1],1[arr],*(arr+1),*arr+1);
    // printf("%d",*arr[0]);                            //error
    printf("%p %p\n",&arr[1],&arr+1);
    // printf("%p\n",&(arr+1));                         //error
    
    
    
 
   
    return 0;
}
