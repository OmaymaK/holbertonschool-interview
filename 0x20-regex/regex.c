#include "regex.h"

/**
 * regex_match - match regex '.' and '*'
 * @str: string
 * @pattern: pattern
 * Return: 1 matched, 0 unmatched
 **/

int regex_match(char const *str, char const *pattern)
{
	ssize_t a = strlen(str) - 1, b = strlen(pattern) - 1;

	while (a > -1 && b > -1)
	{
		if (str[a] == pattern[b] || pattern[b] == '.')
		{
			a--;
			b--;
		}
		else if (pattern[b] == '*')
		{
			if (pattern[b - 1] == str[a] || pattern[b - 1] == '.')
				a--;
			else
				b -= 2;

		}
		else
			return (0);
	}
	if (a != -1)
		return (0);
	if (a == -1 && b != -1 && pattern[b] != '*')
		return (0);
	return (1);
}
