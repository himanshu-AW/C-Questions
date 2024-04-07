#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 20
int top = -1;
char stack[MAX];
char pop();
void push(char);
void main()
{

    char str[20];
    int i;
    printf("Enter the string: ");
    gets(str);
    for (i = 0; i < strlen(str); i++)
        push(str[i]);
    for (i = 0; i < strlen(str); i++)
        str[i] = pop();
    printf("Reversed string is:");
    puts(str);
    getch();
}
void push(char item)
{
    if (top == MAX - 1)
        printf("Stack overflow\n");
    else
        stack[++top] = item;
}
char pop()
{
    if (top == -1)
        printf("Stack underflow \n");
    else
        return stack[top--];
}