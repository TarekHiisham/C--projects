#include <stdio.h>
#include "stdlib.h"
#include "decleration.h"

/* ADD Node from last */

void Add_node_FL(u32_t data){ 
        if(head_ptr ==NULL){
                     /*First Node */        
                head_ptr = (node_t*)calloc(1,sizeof(node_t)) ;
                head_ptr->Data = data ;
                head_ptr->next_node = NULL ;
                last = &(head_ptr->next_node) ;
        }
        else {
                (*last) = (node_t*)calloc(1,sizeof(node_t)) ;
                (*last)->Data= data ;
                (*last)->next_node =NULL ;
                last = &((*last)->next_node) ;                        
             }
return ;      
         }
