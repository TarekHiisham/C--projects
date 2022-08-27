#include <stdio.h>
#include "../type_def/typedef.h"
#include"stdlib.h"
u8_t x = 50 ;
void func(void);
int main(void)
{
  func();
 printf("%d",x);
  return 0 ;
}
void func(void){

  x = 70 ;
}