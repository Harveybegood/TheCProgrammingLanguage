/*
 *	Write a program to print the value of EOF.
 *
 * */

#include<stdio.h>

int print_value_EOF(){

	printf("%d\n", EOF);
}

void main(){

	print_value_EOF();
}

/*
 * below is cited from head file stdio.h which shows the value of EOF is -1. 
 * and it matches the result of our program.
 *
 * The value returned by fgetc and similar functions to indicate the end of the file.                                                 
  
	#define EOF (-1)

*/

