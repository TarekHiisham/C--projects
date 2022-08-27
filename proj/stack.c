#include "../type_def/typedef.h"
#include "stdio.h"

u8_t stack_pointer = 0 ;
u8_t stack_arr[100] ;

void stack_push(u8_t data);
void stack_pop(u8_t data);

int main(void){

    return 0;
}
void stack_push(u8_t data){
    if (stack_pointer ==100){
   printf( "stack over flow");
                        }
   else{
stack_arr[stack_pointer] = data ;
stack_pointer++ ;
       }
}
void stack_pop(u8_t data){
    if (stack_pointer==0){
        printf("stack is empty");
    }
    else {
        stack_pointer -- ;
    printf("The popped data is : %d",stack_arr[stack_pointer]);
}
}
