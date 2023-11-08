#include <stdio.h>

int main()
{
    int rows, i, j, k;
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < rows - i - 1; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= rows; k++)
        {
            printf("%d ", k);
        }
        puts("");
    }
}