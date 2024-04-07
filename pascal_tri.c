#include <stdio.h>
#include <conio.h>

int fact(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}

void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", fact(i) / (fact(j) * fact(i - j)));
        }
        printf("\n");
    }

    getch();
}
