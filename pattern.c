// *****
// *****
// *****
// *****
// *****
#include <stdio.h>
int main()
{
    int i,a=65, j, n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {

        for (j = 1; j <= i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
