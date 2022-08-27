#include <stdio.h>
#include "../type_def/typedef.h"
/* enum is third user defined الكومبيلر مسؤل يعمله  intialization */

typedef enum {
saturday ,
sunday ,
monday 

}days_t;

int main(void){
days_t obj ;
printf("%d",obj);
    return 0 ;
}