#include <bsd/string.h>
#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*result;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == (char)c)
		{
			result = &((char *)s)[i];
			return (result);
		}
		i++;
	}
	return (NULL);
}

int	main()
{
	char	data[20] = {  1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	size_t	n = 11;
	int	c = 12;
	char	*resultP;
	char	*resultV;

	resultP = ft_memchr(data, c, n);
	resultV = memchr(data, c, n);
	printf("PERSO: %s\n", resultP);
	printf("PERSO: %s\n", resultV);
	return (0);
}
