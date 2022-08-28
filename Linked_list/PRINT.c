   #include <stdio.h>
#include "stdlib.h"
#include "decleration.h"   
         
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
