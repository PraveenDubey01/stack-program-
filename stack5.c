#include<stdio.h>
#define MAX 5

typedef int item_type;

typedef struct
{
	item_type e[MAX];
	int top;
}stack;

void init(stack*);
void push(stack*,item_type item);
item_type pop(stack*);
item_type peek(stack*);
int size(stack*);
int isempty(stack*);
int isfull(stack*);

void init(stack* sp)
{
	sp->top = -1;
}
void push(stack* sp,item_type item)
{
	if(isfull(sp))  //top==5-1	
	{
		puts("Stack is overflow!");
		return;
	}
	sp->e[++sp->top] = item;
}

item_type pop(stack* sp)
{
	if(isempty(sp))
	{
		puts("Stack is underflow!");
		return 0;
	}
	return sp->e[sp->top--];
} 
item_type peek(stack* sp)
{
	if(isempty(sp))
	{
		puts("Stack is underflow!");
		return 0;
	}
	return sp->e[sp->top];
}
int size(stack* sp)
{
	return (sp->top+1);
}
int isempty(stack* sp)
{
	return (sp->top==-1);
}
int isfull(stack* sp)
{
	return (sp->top == MAX-1);
}





