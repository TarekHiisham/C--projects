#include <stdio.h>
#include "stdlib.h"
#include "decleration.h"


void Add_node_FL(u32_t data) ;
void Delete_node_FL(void) ;
void Add_node_FA(u32_t data , u8_t location);
void Delete_node_FA(u8_t location);
void push(u32_t data);
void printList(node_t *node);

int main(void){
 Add_node_FL(50);
 Add_node_FL(30);
 Add_node_FL(20);
 Add_node_FL(70);
  printList(head_ptr);
 Delete_node_FL();
 printList(head_ptr);
 Add_node_FA(3,2);
 printList(head_ptr);
 Delete_node_FA(4);
 printList(head_ptr);

return 0 ;      
}

                

 


