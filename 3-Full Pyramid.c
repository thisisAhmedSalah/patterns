#include <stdio.h>

int main(void)
{
    int rows, i, j, k;
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < 2 * (rows - i) - 1; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= (2 * i) + 1; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}