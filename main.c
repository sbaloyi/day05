#include <stdio.h>

int main()
{
	char dest[] = "Hello";
	char src[] = "World";
	ft_strncat(dest, src);
	printf("%s\n", dest);
}
