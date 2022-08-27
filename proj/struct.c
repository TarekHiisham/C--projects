#include <stdio.h>
#include <string.h>
#include "../type_def/typedef.h"
typedef struct  
{
    u32_t book_id ;
    u8_t book_name[20] ;
    u8_t book_author[20] ;
}book_t;
book_t books [2]={
    {123,"Hebta","Ahmed"},
    {213,"harry","jack"}

};
void ptrstruct (book_t* b1);
// max padding = pagging -1 
#pragma pack(1)
typedef struct {
    u8_t x;
    u8_t y;
    u32_t z;
}str_t;
int main(void){
    printf("%d\n",sizeof(str_t));
    ptrstruct(books);
    return 0 ;
}
void ptrstruct (book_t *b1){
for(u8_t i=0 ;i<2;i++){
    printf("Book %d id %d\n",i,b1[i].book_id);
    printf("Book %d name %s\n",i,b1[i].book_name);
    printf("Book %d author %s\n",i,b1[i].book_author);
}
}