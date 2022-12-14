#include<stdlib.h>
#include "main.h"

/**
 * str_concat - appends one string to another string
 * @s1: string to concatenate too
 * @s2: string to add to s1
 * Return: pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	size_t size, i, len1, len2;

	len1 = 0, len2 = 0, size = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	size = len1 + len2 + 1;
	s3 = malloc(sizeof(char) * size);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	for (i = 0; i < len2; i++)
		s3[len1 + i] = s2[i];
	s3[size - 1] = '\0';
	return (s3);
}
