/*
 *	Verify that the expression getchar() != EOF is 0 or 1
 *
 * */

#include<stdio.h>

void main(){
	printf("Verify that the expression getchar() != EOF: ");
	int value = getchar() != EOF;
	printf("%d\n", value);
}

/*
 *	return 1 while try many different kind of inputs,such as characters, numbers..etc
 *      return 0 while try ctrl + d
 *
 * */
