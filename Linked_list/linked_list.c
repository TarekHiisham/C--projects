#include <stdio.h>
#include "stdlib.h"
#include "decleration.h"


void Add_node_FL(u32_t data) ;
void Delete_node_FL(void) ;
void Add_node_FA(u32_t data , u8_t location);
void Delete_node_FA(u8_t location);
void push(u32_t data);
void printList(node_t *node);

node_t *head_ptr=NULL ;
node_t **last =NULL  ;

int main(void){
Add_node_FA(20,1);
printList(head_ptr);
Add_node_FL(5);
printList(head_ptr);
Add_node_FA(35,2);
printList(head_ptr);
Add_node_FL(70);
printList(head_ptr);
Delete_node_FA(1);
printList(head_ptr);
Delete_node_FL();
printList(head_ptr);
Add_node_FA(4,9);
printList(head_ptr);


return 0 ;      
}

                

 


