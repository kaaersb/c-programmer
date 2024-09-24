#include <stdio.h>

int main(void)
{

    int d;

    printf("Pyramide diameter indtastning\n > \0");
    scanf("%d", &d);

    for (int i = 0; i <= d; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    for (int i = d - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}