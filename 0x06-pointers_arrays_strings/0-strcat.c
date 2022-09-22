#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: string destination to be appended
 *@src: string source to concatenate
 *Return: a pointer to the resulting string destination
 */

char *_strcat(char *dest, char *src)
{
	int day = 0, day2 = 0;

	while (*(dest + day) != '\0')
	{
		day++;
	}

	while (day2 >= 0)
	{
		*(dest + day) = *(src + day2);
		if (*(src + day2) == '\0')
			break;
		day++;
		day2++;
	}
	return (dest);
}
