#include <stdio.h>

int main(void)
{
    int num, i, j,k;
    scanf("%d", &num);
    for ( i = 0; i < num; i++)
    {
        for ( j = 0; j < 2 * (num - i) - 2; j++)
        {
            printf(" ");
        }

        for(k = 1; k <= i + 1; k++)
        {
            printf("%d ",k ); 
        }
        printf("\n");
    }
    
}