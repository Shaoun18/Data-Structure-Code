#include<stdio.h>
#define stack_Max 100

typedef struct
{
    int top;
    int data[stack_Max];
}stack;

int main()
{
    stack my_stack;
    int item;

    my_stack.top = 0;

    push(&my_stack,1);
    push(&my_stack,2);
    push(&my_stack,3);
    push(&my_stack,4);

    item = pop(&my_stack);
    printf("%d\n",item);

    item = pop(&my_stack);
    printf("%d\n",item);
}

void push(stack *s, int item)
{
    if(s->top < stack_Max)
    {
        s->data[s->top] = item;
        s->top = s-> top +1;
    }
    else
    {
        printf("stack is full!\n");
    }
}

void pop(stack *s)
{
    int item;

    if(s->top == 0)
    {
        printf("stack is empty!\n");
        return -1;
    }
    else
    {
        s->top = s->top-1;
        item = s->data[s->top];
    }
    return item;
}

