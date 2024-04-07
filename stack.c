#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define STACKSIZE 6
typedef struct
{
    int item[STACKSIZE];
    int top;
} stack;
void push(int x, stack *s);
int pop(stack *s);
void traverse(stack *s);
void main()
{
    int x;
    stack s;
    int choise;
    char ch;
    s.top = -1;
    do
    {
        printf("\n 1.PUSH\n 2.POP\n 3.TRAVERSE");
        printf("\nEnter our choise");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            printf("\n Enter the stack element");
            scanf("%d", &x);
            push(x, &s);
            break;
        case 2:
            printf("\nThe deleted item %d", pop(&s));
            break;
        case 3:
            traverse(&s);
            break;
        default:
            printf("\n You have entered Wrong choise!!");
        }
        // fflush(0);
        printf("\nDo you wish to Continue(Y/N)");
        scanf("%c", &ch);
    } while (ch == 'Y' || ch == 'y')
}
void push(int x, stack *s)
{
    if (s->top == STACKSIZE - 1)
    {
        printf("Stack overflow");
    }
    else
        s->item[++(s->top)] = x;
}
int pop(stack *s)
{
    if (s->top == -1)
    {
        printf("stack underflow");
    }
    else
        return (s->item[(s->top)--]);
}
void traverse(stack *s)
{
    int i;
    if (s->top == -1)
        printf("stack is empty");
    else
    {
        printf("traverse the element");
        for (i = s->top; i >= 0; i--)
            printf("\n %d", s->item[i]);
    }
}
