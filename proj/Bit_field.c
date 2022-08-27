#include "stdio.h"
#include  "../type_def/typedef.h"
#pragma pack(1)
typedef struct 
{
 u8_t x :4 ;
 u8_t y :4 ;
 u16_t z:8 ;
}bitfield_t;
int main(void){
printf("%d",sizeof(bitfield_t));

    return 0;
}