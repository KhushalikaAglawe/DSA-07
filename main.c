#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int i=0;
int stack[SIZE];
int top= -1;

void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("Pushed %d into stack.\n", value);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
int main()
{   push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60); // This will show overflow

    display();

     /*🔹 Stack    tom work
Implement a stack using array with push, pop, and display functions.

Implement a stack using linked list.

Write a program to check if a string has balanced parentheses using stack.

Write a program to convert infix expression to postfix using stack.

Evaluate a postfix expression using stack. */

    return 0;
}
