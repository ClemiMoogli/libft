#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		i;

	i = 0;
	while (s[i])
		i++;
	ptr = malloc(sizeof(char) * i + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	main()
{
	char	s1[50] = "Ceci est un test";
	printf("PERSO: %s\n", ft_strdup(s1));
	printf("VRAI: %s\n", strdup(s1));
	return (0);
}
