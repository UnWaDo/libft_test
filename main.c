#include <stdio.h>
#include "libft.h"
#include <ctype.h>
#include <string.h>

// void	check_function(void* value, int (*cmp)(void*))
// {
// 	int	result;

// 	result = cmp(value);
// 	if (result)
// 		printf("Param: %d, KO\n", value);
// }

// int check_int_function(int value, int (*exp)(int), int (*res)(int))
// {
// 	int	expected;
// 	int	result;

// 	expected = (*exp)(value);
// 	result = (*res)(value);
// 	if (expected != result)
// 		printf("Expected: %d, found: %d\n");
// 	return (expected - result);
// }

// int	check_types(void* value)
// {
// 	int	unraw_data;
// 	int	result;

// 	unraw_data = *((int *) value);
// 	result = check_int_function(unraw_data, &isalpha, &ft_isaplha);
// 	result = result | check_int_function(unraw_data, &isdigit, &ft_isdigit);
// 	result = result | check_int_function(unraw_data, &isalnum, &ft_isalpha);
// 	result = result | check_int_function(unraw_data, &isascii, &ft_isascii);
// 	result = result | check_int_function(unraw_data, &isprint, &ft_isprint);
// 	return (result);
// }

int	main(void)
{
	// int	i;

	// i = 0;
	// while (i < 1000)
	// {
	// 	check_function(i, &check_types);
	// 	i++;
	// }

	// char	string[50] = {"Some input string"};
	char	*expected;
	char	*result;

	expected = malloc(50);
	result = malloc(50);
	ft_memset(expected, 'A', 50);
	ft_memset(result, 'A', 50);
	printf("%s\n%s\n", expected, result);
	// ft_memcpy(expected, string, ft_strlen(string));
	// ft_memcpy(result, string, ft_strlen(string));
	// printf("%s\n%s\n", expected, result);
	// memmove(expected + 3, expected, 25);
	// ft_memmove(result + 3, result, 25);
	// printf("%s\n%s\n", expected, result);

	char	empty_string[] = {"Some string\0with hidden part"};
	expected[25] = 0;
	result[25] = 0;
	// printf("%lu %lu\n", strlcat(expected, string, 50), ft_strlcat(result, string, 50));
	// printf("%s\n%s\n", expected, result);
	printf("%lu %lu\n", strlcat(expected, empty_string, 50), ft_strlcat(result, empty_string, 50));
	printf("%s\n%s\n", expected, result);

	free(expected);
	free(result);
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "123123123123131231231231231233";
	char buff2[0xF00] = "123123123123131231231231231233";
	// size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	printf("%lu\n", strlen(buff2) + strlen(str));
	size_t r1 = strlcat(buff1, str, 0);
	size_t r2 = ft_strlcat(buff2, str, 0);
	printf("%lu %lu\n", r1, r2);
	printf("%s\n%s\n", buff1, buff2);
}