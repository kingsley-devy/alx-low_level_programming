#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * main - check positive or negative numbers
  * Return: 0
  */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */

        if ( n > 0)
                printf("is positive");
        else if ( n == 0 )
                printf("is Zero");
        else
                printf("is negative");

        printf("\n");
        return (0);
}
