#include <stdio.h>
#define max 10
int push(int[], int);
int pop(int[], int);
void display(int[], int);
void peek(int[], int);

int main()
{
    int ch, stack[max], Top = -1;
    do
    {
        printf("\n1.PUSH\n");
        printf("2.POP\n");
        printf("3.DISPLAY\n");
        printf("4.PEEK\n");
        printf("\nEnter choice : \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            Top = push(stack, Top);
            break;
        case 2:
            Top = pop(stack, Top);
            break;
        case 3:
            display(stack, Top);
            break;
        case 4:
            peek(stack, Top);
            break;
        default:
            printf("Invalid option\n");
        }
    } while (ch <= 4);
    return 0;
}

int push(int stack[], int Top)
{
    int x;
    if (Top == max - 1)
    {
        printf("Stack is overflow\n");
    }
    else
    {
        printf("Enter number\n");
        scanf("%d", &x);
        Top++;
        stack[Top] = x;
    }
    return (Top);
}

int pop(int stack[], int Top)
{
    int x;
    if (Top == -1)
    {
        printf("Empty\n");
    }
    else
    {
        x = stack[Top];
        printf("The popped element is %d", x);
        Top--;
    }
    return (Top);
}
void display(int stack[], int Top)
{
    if (Top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        while (Top >= 0)
        {
            printf("%d ", stack[Top]);
            Top--;
        }
    }
}
void peek(int stack[], int Top)
{
    if (Top == -1)
    {
        printf("%d", stack[Top]);
    }
}