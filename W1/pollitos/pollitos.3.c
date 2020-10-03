// Abstracción con parametrización

#include <stdio.h>

void pollitos(int n);

int main(void)
{
    pollitos(3);
}

// Imprimir una cantidad de pollitos
void pollitos(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Pollito\n");
    }
}
