#include <stdio.h>
#include "../type_def/typedef.h"
#include "stdlib.h"
s32_t* Bubble_sort(s32_t* arr,s32_t size );

int main(void){

u16_t* ptr = (u16_t*)malloc(10*sizeof(u16_t));
u32_t *ptr2= NULL;
ptr2 =(u32_t *)calloc(10 , sizeof(u32_t));

for(u8_t i=0;i<10;i++){
scanf("%d",&ptr2[i]);
}   
Bubble_sort(ptr2 , 10);
free(ptr2);
    return 0;
}