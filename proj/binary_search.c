#include <stdio.h>
#include "../type_def/typedef.h"
void Binary_search(s32_t* arr , s32_t key, s32_t size){
s32_t mid, flag ;
s32_t min = 0;
s32_t max = size-1 ;
while (min<=max)
{
      mid = (max + min)/2  ;
      if(arr[mid]==key)
      {
        printf("key is Found");
        break ;
      }
      else if(arr[mid]>key)
      {
        max = mid-1 ;
      }
      else if (arr[mid]<key)
      {
        min = mid +1 ;
      }
      else
      {

      }
}
if (min > max)
{
  printf("key is Not Found");
}
}







