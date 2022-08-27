#include <stdio.h>
#include "../type_def/typedef.h"
void reverse (u8_t*begin,u8_t*end);
void word_reverse (u8_t * s);
void reverse (u8_t*begin,u8_t*end){
    u8_t temp ;
    while(begin<end){
    temp = *begin ;
    *begin++=*end ;
    *end-- = temp ;
    }
}
void word_reverse (u8_t * s){
u8_t *begin =s ;
u8_t *end =s   ;
u8_t *temp =s  ;
   while((*end)!='\0'){
        end++ ;
   }
    reverse(begin,end-1);
   while((*temp)!='\0'){
        while (((*temp)!=' ')&((*temp)!='\0'))
            {
              temp++ ;
            }
    reverse(begin,temp-1);
    begin=temp+1 ;  
    temp ++ ;
   }
}
int main (void){
u8_t s[]="Hello world only you Darling !";
word_reverse(s);
printf("%s",s);
    return 0;
}