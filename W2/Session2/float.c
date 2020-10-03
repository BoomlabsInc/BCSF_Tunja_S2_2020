// Logical operators
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Esto es un string
    string a = "asd123";
    char ch = 'a';


    // Prompt user to agree
    char c = get_char("Aceptas los términos y condiciones de BCSF?\n");

    // Check whether agreed
    if (c == 'Y' || c == 'y')
    {
        printf("Has aceptado los términos.\n", 10);
    }
    else if (c == 'N' || c == 'n')
    {
        printf("No has aceptado los términos. %i\n",10);
    }
}


void printf(string s, ....)