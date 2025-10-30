#include <string.h>
#include <stdio.h>

char    *ft_strchr(const char *s, int c)
{
    int i;
    char *str;

    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
        {
            str = (char *)&s[i];
            return (str);
        }
        i++;
    }
    return (NULL);
}

int main()
{
    char    str[50] = "Ceci est un Zigoto pour tester";
    int     c = 'z';
    printf("PERSO: %s\n", ft_strchr(str, c));
    printf("VRAI: %s\n", strchr(str, c));
    return (0);
}
