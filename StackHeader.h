#ifndef STACKWITHLL_H_INCLUDED
#define STACKWITHLL_H_INCLUDED
//#define ROGUEVALUE ""
typedef struct laloo {
char num;
struct laloo* next;
}Node, *NodePtr;

typedef struct {
NodePtr top;
}StackType, *Stack;

Stack initStack();

int isEmpty(Stack S);
char pop(Stack S);
void  push(Stack S, char x);


Stack initStack(){
    Stack st = malloc(sizeof(StackType));
    st->top = NULL;
    return st;
}

int isEmpty(Stack S){
    return (S->top == NULL);
}
void push(Stack S, char x){
    NodePtr ptr = malloc(sizeof(Node));
    ptr->num = x;
    ptr->next = S->top;
    S->top = ptr;
    }

char pop(Stack S){
    if(isEmpty(S)) return NULL;
    char hold = S->top->num;
    NodePtr tmp = S->top;
    S->top = S->top->next;
    free(tmp);
    return hold;
}
#endif // STACKWITHLL_H_INCLUDED

