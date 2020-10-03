// Return value

#include <cs50.h>
#include <stdio.h>

int cuadrado(int n);

int main(void)
{
    int input = get_int("Entrada: ");
    printf("Salida: %i\n", cuadrado(input));
}

// Square n
int cuadrado(int n)
{
    return n * n;
}
