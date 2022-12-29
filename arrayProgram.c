#include <stdio.h>
#include <stdlib.h> 
struct stack{
    int top; 
    int size; 
    int *arr;
};
void push(struct stack *s, int data){
    if (s->top == s->size){
        printf("\nStack is overflow:");
    }
    else{
        s->top++;
        s->arr[s->top] = data;
    }
}
int pop(struct stack *s){
    if (s->top == -1){
        printf("\nStack is UNDERFLOW"); 
        return -1;
    }
    else{
        // s->arr[s->top]=NULL; 
        int q;
        q = s->top; 
        s->top--;
        return s->arr[q];
    }
}
int peek(struct stack *s){
    if (s->top == -1){
        printf("\nStack is UNDERFLOW"); 
        return -1;
    }
    else{
        return s->arr[s->top];
    }
}
void printStack(struct stack *s){
	int i;
    printf("\nElement of stack is:"); 
    for (i = 0; i <= s->top; i++){
        printf(" %d", s->arr[i]);
    }
}
void main(){
    // int data1[100], j = 0, ch; 
    struct stack *s;
    s->size = 100;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int)); 
    push(s, 45);
    push(s, 47);
    push(s,56);
    push(s, 46);
    push(s, 48);
    push(s,55); 
	printStack(s);
    printf("\nthe popped element is :%d ", pop(s)); 
    printf("\nthe popped element is :%d ", pop(s)); 
    printStack(s);
    printf("\nthe peek value is:%d",peek(s));
}
