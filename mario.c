#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do 
    {
       n = get_int("Number:");
    }
    while (n < 1 || n > 8);
    
    for (int r = 0; r < n; r++)
    {
        for(int d = 0; d < n - (r + 1); d++)
        {
            printf(" ");
        }
            for (int c = 0; c <= r; c++)
            {
                printf("#");
            }
            printf("\n");
    }
    return n;
}
