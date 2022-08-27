#include <stdio.h>
#include <string.h>
#include "../type_def/typedef.h"

//define as type def either use struct "name" as datatype or "book_t"00
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

// method 1 to declare data structure
struct book {
    u32_t book_id ;
    u8_t book_name[20] ;
    u8_t book_author[20] ;
};
// method 2
struct book_2 {
    u32_t book_id ;
    u8_t book_name[20] ;
    u8_t book_author[20] ;
}book3;
// pointers

int main(void){
    ptrstruct(&books);
    printf("Book 7 id %d\n",ptr->book_id);
    printf("Book 7 name %s\n",ptr->book_name);
    printf("Book 7 author %s\n",ptr->book_author);
    book_t b1 ;
    b1.book_id = 120 ;
    printf("%d\n",b1.book_id);
    printf("book 5 id is %d\n",books[1].book_id);
    book3.book_id = 255 ;
    strcpy  (book3.book_name ,"Hebta");
    strcpy(book3.book_author,"Ahmed mourad");
    printf("book_2 name is %s\n",book3.book_name);

struct book book_1 ={100 ,"Hebta","Ahmed mourad"} ;
struct book book_2 ={200 ,"Harry botar","james"} ;
struct book book_3 ={300 ,"lil baba","yasser"} ;
printf("Book 1 id %d\n",book_1.book_id);
printf("Book 1 name %s\n",book_1.book_name);
printf("Book 1 author %s\n",book_1.book_author);

    return 0 ;
}
void ptrstruct (book_t *b1){
for(u8_t i=0 ;i<2;i++){
    printf("Book %d id %d\n",i,b1[i].book_id);
    printf("Book %d name %s\n",i,b1[i].book_name);
    printf("Book %d author %s\n",i,b1[i].book_author);
}
}
