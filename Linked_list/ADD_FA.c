#include <stdio.h>
#include "stdlib.h"
#include "decleration.h"

       /*Add from choosen location*/

void Add_node_FA(u32_t data , u8_t location){        
node_t *end =head_ptr ;
node_t **prev =&head_ptr;
u8_t counter=1 ;

while (counter!=location)
{
        prev = &((*prev)->next_node);
        end = (*prev);
        counter++ ;
        if (end==NULL)
        {
                break;
        }
        
}
        if(end==NULL){
                printf("Location does not exist!\nnew node will be created from last and carry data\n");

                (*prev) = (node_t*)calloc(1,sizeof(node_t));
                (*prev)->Data = data ;
                (*prev)->next_node = end ;
                last = &((*prev)->next_node);
        }
        else{
                
                (*prev) = (node_t*)calloc(1,sizeof(node_t));
                (*prev)->Data = data ;
                (*prev)->next_node = end ;
        }
    return ;    
}
