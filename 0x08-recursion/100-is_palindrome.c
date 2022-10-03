#include "main.h"

/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * @s: string to use
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int madam = 1;

	check(s, 0, _strlen_recursion(s) - 1, &madam);
	return (madam);
}

/**
 * check - checks if a string is a palindrome
 * @s: string to be checked
 * @start: start of the check
 * @end: end of the check
 * @madam: madam to be checked if a word is a palindrome
 * Return: nothing
 */

void check(char *s, int start, int end, int *madam)
{
	if (start <= end)
	{
		if (s[start] == s[end])
			*madam *= 1;
		else
			*madam *= 0;
		check(s, start + 1, end - 1, madam);
	}
}

/**
 * _strlen_recursion - the function calculates the length of a string
 * @s: the string to be used
 * Return: The length of a string
 */

int _strlen_recursion(char *s)
{
	int add = 0;

	if (*s != '\0')
	{
		add++;
		add += _strlen_recursion(s + 1);
	}
	return (add);
}
