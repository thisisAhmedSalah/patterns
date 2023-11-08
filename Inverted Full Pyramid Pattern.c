#include <stdio.h>

int main()
{
    int rows, i, j, k;
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }
        for (k = 1; k < (2 * rows) - (2 * i); k++)
        {
            printf("%d ", k);
        }
        puts("");
    }
}