#include "stack.h"

// Stack counter for tracking the top of the stack
int counter = 0;

// Convert infix expression to postfix expression
void intopost(char *infix, char *postfix) {
    int st;
    push('(');  // Initialize stack with '('
    while (*infix != '\0') {
        // Check for spaces, operands, and operators
        if (isspace(*infix)) ;
        else if (isalpha(*infix) || isdigit(*infix)) {
            *postfix++ = *infix;  // Add operand to postfix
        } else if (*infix == '(') {
            push('(');  // Push '(' onto the stack
        } else if (*infix == ')') {
            // Pop and add operators to postfix until '(' is found
            while ((st = pop()) != '(') {
                *postfix++ = st;
            }
        } else if (*infix == '*' || *infix == '/') {
            // Handle multiplication and division
            while (1) {
                if ((st = pop()) == '(' || st == '+' || st == '-') {
                    push(st);
                    break;
                }
                *postfix++ = st;  // Add operator to postfix
            }
            push(*infix);
        } else if (*infix == '+' || *infix == '-') {
            // Handle addition and subtraction
            while (1) {
                if ((st = pop()) == '(') {
                    push(st);
                    break;
                }
                *postfix++ = st;
            }
            push(*infix);
        }
        ++infix;
    }
    // Add remaining operators to postfix
    while ((st = pop()) != '(') {
        *postfix++ = st;
    }
    *postfix = '\0';  // Null-terminate postfix string
}

// Push value onto the stack
void push(int value) {
    stack[counter++] = value;
}

// Pop value from the stack
int pop() {
    if (counter == 0) return 0;  // Check for underflow
    return stack[--counter];  // Return top value from stack
}

// Evaluate postfix expression
double eva(char str[]) {
    int c, i;
    double opnd1, opnd2, value;
    struct stack opndstk;
    opndstk.top = -1;

    // Process each character in the postfix expression
    for (i = 0; (c = str[i]) != '\0'; i++) {
        if (isdigit(c)) {
            epush(&opndstk, (double)(c - '0'));  // Push operand onto stack
        } else {
            // Perform operation and push result onto stack
            opnd2 = epop(&opndstk);
            opnd1 = epop(&opndstk);
            value = oper(c, opnd1, opnd2);
            epush(&opndstk, value);
        }
    }
    return epop(&opndstk);  // Return the final result
}

// Push double value onto the stack
void epush(struct stack *ps, double x) {
    ps->items[++(ps->top)] = x;
}

// Pop double value from the stack
double epop(struct stack *ps) {
    return ps->items[ps->top--];  // Return top value from stack
}

// Perform operation based on the given operator
double oper(int symb, double op1, double op2) {
    switch (symb) {
        case '+': return op1 + op2;  // Addition
        case '-': return op1 - op2;  // Subtraction
        case '*': return op1 * op2;  // Multiplication
        case '/': return op1 / op2;  // Division
    }
}
