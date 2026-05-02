// Day 34 - Question 1
// Problem: Evaluate Postfix Expression

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** top, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = *top;
    *top = newNode;
}

int pop(struct Node** top) {
    struct Node* temp = *top;
    int val = temp->data;
    *top = (*top)->next;
    free(temp);
    return val;
}

int main() {
    struct Node* stack = NULL;
    char s[100];
    int n;

    while (scanf("%s", s) != EOF) {
        if (isdigit(s[0])) {
            push(&stack, atoi(s));
        } else {
            // Pop two operands and apply operator
            int v2 = pop(&stack);
            int v1 = pop(&stack);
            if (s[0] == '+') push(&stack, v1 + v2);
            else if (s[0] == '-') push(&stack, v1 - v2);
            else if (s[0] == '*') push(&stack, v1 * v2);
            else if (s[0] == '/') push(&stack, v1 / v2);
        }
    }

    printf("%d\n", pop(&stack));
    return 0;
}