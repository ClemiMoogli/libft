#include <ctype.h>
#include <stdio.h>

int ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
    {
        c = c - 32;
    }
    return (c);
}

int main()
{
    int c;

    c = 'r';
    printf("PERSO: %c\n", ft_toupper(c));
    printf("VRAI: %c\n", toupper(c));
    return (0);
}
