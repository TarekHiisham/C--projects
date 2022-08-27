#include "../type_def/typedef.h"
#include "stdio.h"
s32_t* Bubble_sort(s32_t* arr,s32_t size ){
for(s32_t i=0;i<size;i++)
{
  for (s32_t j=0 ; j<(size-1) ;j++)
  {
    if ((arr[j+1] )<(arr[j]))
    {
        s32_t n=arr[j] ;
        arr[j]=arr[j+1];
        arr[j+1]=n ;
    }
    else 
        continue ;
  }
}
for(u8_t i=0;i<size;i++){
printf("%d\t",arr[i]);
} 
return arr ;
}