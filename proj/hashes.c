#include "stdio.h"
#include "../type_def/typedef.h"

#define x 100   // x is called macro object, value is fixed
//#undef x    // delete text replacement of macro
#define ADD(num1 , num2)    (num1+num2)    //function like macro
#define PRINT()      do\
                        {\
                        printf("my name");\
                        printf("tarek");\
                        }while(0)


int main (void){
    if(x>5){
        PRINT();
    }


    return 0 ;
}