/*
 *	Write a program to copy its input to its output, replacing each tab by \t, 
 *	each backspace by \b, and each backslash by \\. This makes tabs and backspaces
 *	visible in an unambiguous way.
 *
 * */

#include<stdio.h>

void main(){

	int c;
	c = 0;

	while((c = getchar()) != EOF){
		// can be written by a more compact way, like use switch and putchar()...
		if(c == '\t'){
			printf("%s", "\\t");
		}
		if(c == '\b'){
			printf("%s", "\\b");
		}
		if(c == '\\'){
			printf("%s", "\\\\");
		}
		if(c != '\t' && c != '\b' && c != '\\'){
			printf("%c", c);
		}
		if(c == '\r'){
			printf("\n");
		}
	
	}

}

/*
 *		the result as below 
 *
 *	input:	hello   world \ th^H 
       output:	hello\tworld \\ th\b 
 *
 *	reference to an explanation https://stackoverflow.com/questions/26899470/how-can-i-change-backspace-to-b
 *
 * */
