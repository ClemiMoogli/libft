int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}

#include <stdio.h>
#include <ctype.h>

int main()
{
    int c;

    c = 'Z';
    printf("PERSO: %c\n", ft_tolower(c));
    printf("VRAI: %c\n", tolower(c));
    return (0);
}
