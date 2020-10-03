// get_float and printf with %f

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float precio = get_float("¿Quál es el precio?\n$");
    printf("Tu total es: $%.2f.\n", precio + (precio * 0.19));
}
