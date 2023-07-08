<<<<<<< HEAD
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


/**
 * main - Determines if a number is positive, negative or zero.
 * 
 * Return: Always 0 (Success)
*/
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d os zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }
    
    return 0;   
}

=======
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
>>>>>>> c788df0e0cef9c2be61d94738ddae3956e7d1356
