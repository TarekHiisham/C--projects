#include <stdio.h>
#include "../type_def/typedef.h"
int main()
{
    
    int x = 100;
    //int* ptr; //wild pointer
    int* ptr = &x;
    int** ptr2;  
    ptr2= &ptr;
    **ptr2 =150 ;


    printf("The value of pointer is: %p\n", ptr);
    printf("The value of variable in pointer is: %d\n", *ptr);

    printf("The value of pointer 2 is: %p\n", ptr2);
    printf("The value of *pointer 2 is: %p\n", *ptr2);
    printf("The value of **pointer 2 is: %d\n", **ptr2);

    return 0 ;
}


    