#include "stdio.h"
#include "../type_def/typedef.h"

/*union is second userdefine 
بحجز سايز الاوبجكت من اليونيون بحجم اكبر فاريبول 
هنا حجمها بحجم الاراي بخزن ف نوع واحد من الداتا
*/
typedef union {
    u8_t data ;
struct  {
    u8_t bit0:1 ;
    u8_t bit1:1 ;
    u8_t bit2:1 ;
    u8_t bit3:1 ;
    u8_t bit4:1 ;
    u8_t bit5:1 ;
    u8_t bit6:1 ;
    u8_t bit7:1 ;
}bits;

}object_t;

int main(void)
{
    
   object_t byte ;
   byte.data=14 ;
   printf("%d %d %d %d %d %d %d %d",byte.bits.bit7,
   byte.bits.bit6,byte.bits.bit5,byte.bits.bit4,byte.bits.bit3,byte.bits.bit2
   ,byte.bits.bit1,byte.bits.bit0);
    

    return 0;
}

