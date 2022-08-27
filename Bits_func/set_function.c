#include "stdio.h"
#include "../type_def/typedef.h"
#define SET_BIT(VAR,N_BIT)    (VAR|(1<<N_BIT))
#define CLEAR_BIT(VAR,N_BIT)  (VAR&(~(1<<N_BIT)))                                
#define TOGGLE_BIT(VAR,N_BIT)  (VAR^(1<<N_BIT))
#define GET_BIT(VAR,N_BIT)  (VAR&(1<<N_BIT))                                                                                          
int main(void){
printf("%d\n",SET_BIT(9,2));
printf("%d\n",CLEAR_BIT(9,2));
printf("%d\n",TOGGLE_BIT(9,2));
if(GET_BIT(9,2)!=0){
printf("%d\n",1);
}
else {
    printf("%d\n",0);
}
    return 0;
 }
