typedef struct node *position;
typedef int ElementTP;
typedef struct node *STACK;

struct node{
  ElementTP element;
  position next;
};

STACK init_stack(void);
void delete_stack(STACK);
ElementTP top(STACK);
void push(STACK,ElementTP);
ElementTP pop(STACK);
int is_null(STACK);
