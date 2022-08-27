#include <stdio.h>
#include <string.h>
typedef unsigned char u8_t ;
typedef struct {
u8_t math:1 ;
u8_t english:1 ;
u8_t physics:1 ;
u8_t chemistry:1 ;
}subject_t;
subject_t std[]={
    {1,0,1,1},
    {0,0,1,1},
    {1,1,1,0},
    {0,0,0,1}
};
int main(void)
{
  if (std[1].math==1)
  {
    printf("Math psssed\n");
  }
  else{printf("Math failed\n");}
  if (std[1].english==1)
  {
    printf("english psssed\n");
  }
  else{printf("english failed\n");}
  if (std[1].physics==1)
  {
    printf("physics psssed\n");
  }
  else{printf("physics failed\n");};
  if (std[1].chemistry==1)
  {
    printf("chemistry psssed\n");
  }
  else{printf("chemistry failed\n");};
    return 0;

}