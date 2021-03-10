#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int startSize = get_int("type starting size: ");

    while (startSize < 9)
    {
        startSize = get_int("type starting size: ");
    }

    // TODO: Prompt for end size

    int endSize = get_int("type end size: ");

    while (endSize < startSize)
    {
        endSize = get_int ("type end size: ");
    }


    // TODO: Calculate number of years until we reach threshold

    int years = 0;
    int currentSize = startSize;

    while (currentSize < endSize)
    {
        currentSize = currentSize + (currentSize / 3) - (currentSize / 4);
        years++;
    }

    // TODO: Print number of years

    printf("Years: %i\n", years);
}
