#include<stdio.h>

/**
 * mymain - Apply the constructor attribute to mymain() so that it
 * mymain - prints a sentence before the main
 */

void mymain(void) __attribute__ ((constructor));

/**
 * mymain - implementation of mymain
 */

void mymain(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
