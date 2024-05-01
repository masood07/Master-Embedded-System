#ifndef STACK_H
#define STACK_H
#define length 15
struct stack
{
 int top;
 double items[length];
};
int stack[length];
void push(int value);
int pop();
void intopost(char *infix, char *postfix);
double eva(char str[]);
void epush(struct stack *ps, double x);
double epop(struct stack *ps);
double oper(int symb, double op1, double op2);
#endif