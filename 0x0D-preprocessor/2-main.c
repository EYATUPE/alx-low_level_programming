#include <stdio.h>

/**
 * main - Prints the name of the file program was compiled From
* Return:  the name of the file
*/

char main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
