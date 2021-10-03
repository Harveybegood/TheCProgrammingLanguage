/*
 *	Write a program to copy its input to its output, replacing each string of 
 *	one or more blanks by a single blank.
 *
 * */

#include<stdio.h>

void main(){

	int l_blank, c;
	l_blank = 0;
	c = 0;
	while((c = getchar()) != EOF){
		
		if(c != ' ' ){
			printf("%c", c);
			l_blank = 0;
		}
		
		if(c == ' ' && l_blank == 0){
			++l_blank;
			printf("%c", ' ');
		}
	
	}
}

/*
 *
 *	input:	hello  world!  do you    like     programming?   
 *     output:	hello world! do you like programming?            
 *
 *
 * */
