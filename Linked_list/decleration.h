typedef unsigned char u8_t ;
typedef unsigned short u16_t ;
typedef unsigned long u32_t ;

typedef signed char s8_t ;
typedef signed short s16_t ;
typedef signed long s32_t ;

typedef float f32_t ;
typedef double f64_t ; 


void Add_node_FL(u32_t data) ;
void Delete_node_FL(void) ;
void Add_node_FA(u32_t data , u8_t location);
void Delete_node_FA(u8_t location);
void push(u32_t data);




typedef struct linked_node
{
        u32_t Data ;
        struct linked_node * next_node ;
}node_t;

void printList(node_t *node);
