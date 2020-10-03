// get_string and printf with %s

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("¿Cuál es tu nombre?\n");
    printf("hello, %s\n", s);
}
