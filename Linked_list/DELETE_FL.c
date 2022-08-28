#include <stdio.h>
#include "stdlib.h"
#include "decleration.h"
       
                /*Delete Node from last*/
void Delete_node_FL(void){
node_t **prev =&head_ptr ;
node_t *end =head_ptr ;
if ((*prev)==NULL)
{
       head_ptr =NULL ;
}
else if ((end->next_node)==NULL)
{
     head_ptr=NULL ;
     free(end);
}
else{
while( (end->next_node) !=NULL){
        prev =&((*prev)->next_node);
        end= end->next_node ;
}
(*prev)=NULL ;
last= prev ;
free(end);
}
return;
        }

