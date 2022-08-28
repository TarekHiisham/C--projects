        #include <stdio.h>
#include "stdlib.h"
#include "decleration.h"
        /*Delete Node from choosen location*/

void Delete_node_FA(u8_t location){
node_t ** prev =&head_ptr ;
node_t * end =head_ptr  ;
u8_t counter=1 ;
if(location==1){
end=end->next_node ;
(*prev)=end ;
}
else {
while (counter!=location){
        prev = &((*prev)->next_node) ;
        end =(*prev) ; 
        counter ++ ;
}
end = end->next_node ;
(*prev)= end ;
}
return ;
}
