#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
        while (n < 1 || n > 8);

    int blank = n-1; 
    int hash = 1;
    for(int row = 0; row < n; row++) 
    {
        for (int col = 0; col < n; col++)
        {
         
            if(col < blank)
            {
                printf(" "); 
            }
            else
            {
                printf("#"); 
            }
        }
        printf("  ");
        for (int col = 0; col < n; col++)
        {
         
            if(col < hash)
            {
                printf("#"); 
            }

        }
        blank = blank - 1; 
        hash = hash + 1;
        printf("\n");
    }
    
}



    