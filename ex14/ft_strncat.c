#include <stdio.h>

char *ft_strncat(char *dest, char *src, int nb)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		++i;

	while (nb > j)
	{
		dest[i] = src[j];
		++j;
		++i;
	}
	return (dest);
}

int main()
{
	char dest[] = "Hello";
	char src[] = "World";
	ft_strncat(dest, src, 4);
	printf("%s\n", dest);
}
