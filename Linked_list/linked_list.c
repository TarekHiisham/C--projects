#include <stdio.h>
#include "stdlib.h"
#include "decleration.h"

node_t  *head_ptr= NULL  ;
node_t  **last    = NULL ;   

int main(void){
        Add_node_FA(10,1);
        Add_node_FL(20);
        Add_node_FA(5,1);
        Add_node_FL(600);
        printList(head_ptr);

return 0 ;      
}

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


        /*Add from choosen location*/
void Add_node_FA(u32_t data , u8_t location){
node_t *end =head_ptr ;
node_t **prev =&head_ptr;
u8_t counter=1 ;
if(location==1){
(*prev)=(node_t*)calloc(1,sizeof(node_t)) ;
(*prev)->Data = data ;
(*prev)->next_node =end ;
        if (end==NULL)
                {
                        last = &((*prev)->next_node) ;
                        (*last)=NULL ;
                } 
        else {
                /*Do Nothing*/
        }               

}
else{
while (counter!=location)
{
        prev = &((*prev)->next_node);
        end = (*prev);
        counter++ ;
}
(*prev) = (node_t*)calloc(1,sizeof(node_t));
(*prev)->Data = data ;
(*prev)->next_node = end ;
}
    return ;    
}


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



                /* print List*/        
void printList(node_t *node)
{
  if(node==NULL){
        printf("Empty List!");
  }            
  else{
  while (node != NULL)
  {
     printf(" %d ", node->Data);
     node = node->next_node ;
  }
  }
  printf("\n");
  return ;
}
