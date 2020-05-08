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
    for (int r = 0; r < n; r++) //row
    { 
        for(int d = 0; d <= -r + (n - 1); d++) //DOTS
           {
               printf(" ");
           }
                for (int c = 0; c <= r; c++) //column
                {
                    printf("#");
                }
                printf("\n");
    }
    return n;
}
