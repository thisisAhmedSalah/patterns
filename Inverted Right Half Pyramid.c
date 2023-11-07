#include <stdio.h>

int main(void)
{
    int rows, i, j;
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}