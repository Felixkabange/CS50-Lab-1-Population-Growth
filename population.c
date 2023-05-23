#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int x;
    do
    {
        x = get_int("Positive Integer: What's your start size?\n");
    }
    while (x < 9);

    // Prompt for end size
    int y;
    do
    {
        y = get_int("Positive Integer: What's your end size?\n");
    }
    while (y < x);

    // Calculate number of years until we reach threshold
    int r = 0;
    int n = x;
    while (n < y) {
        n += n / 3 - n / 4;
        r++;
    }

    // Print number of years
    printf("Years: %i\n", r);
}
