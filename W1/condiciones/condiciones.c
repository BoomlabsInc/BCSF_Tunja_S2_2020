// Condiciones y operadores relacionales

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for x
    int x = get_int("x: ");

    // Prompt user for y
    int y = get_int("y: ");

    // Compare x and y
    if (x < y)
    {
        printf("x es menor que y\n");
    }
    else if (x > y)
    {
        printf("x ex mayor que y\n");
    }
    else
    {
        printf("x es igual a y\n");
    }
}
