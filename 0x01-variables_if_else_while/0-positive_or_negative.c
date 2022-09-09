/*
 *
 * file: 0-postive_or_negative.c
 *
 *
 *
 */



#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/*
 *
 * Main - A program is to Print random number(s) indicating whether|.
 *
 *	  It is a postive, negative or a Zero.
 *
 *
 *
 * Returns; Always 0.
 *
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					

					if (n > 0)

								printf("%d is postive\n", n);

						else if (n < 0)

									printf("%d is negative\n", n);

							else

										print("%d is zero\n", n);



								return (0);

}
