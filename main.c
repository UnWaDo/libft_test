#include <stdio.h>
#include "libft.h"
#include <ctype.h>

void	check_function(int c, int (*ref)(int), int (*user)(int))
{
	int	expected;
	int	found;

	expected = ref(c);
	found = user(c);
	printf("expected: %d, found: %d, ", expected, found);
	if (expected != found)
		printf("KO");
	else
		printf("OK");
}

int	main(void)
{
	int	i;

	i = 0;
	while (i < 255)
	{
		printf("Number %d\n", i);
		printf("Isaplha, ");
		check_function(i, &isalpha, &ft_isaplha);
		printf("\n");
		printf("Isdigit, ");
		check_function(i, &isdigit, &ft_isdigit);
		printf("\n");
		printf("Isalnum, ");
		check_function(i, &isalnum, &ft_isalnum);
		printf("\n");
		printf("Isascii, ");
		check_function(i, &isascii, &ft_isascii);
		printf("\n");
		printf("Isprint, ");
		check_function(i, &isprint, &ft_isprint);
		printf("\n");
		i++;
	}
}
