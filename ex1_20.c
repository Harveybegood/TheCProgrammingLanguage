/*
 *	Write a program detab that replaces tabs in the input with the proper number of
 *	blanks to space to the next tab stop. Assume a fixed set of tab stops, say every
 *	n columns. Should n be a variable or a symbolic parameter?
 *
 * */

#include <stdio.h>
//#define MAXLINE 1000
#define tabstops 10    // since n will be a fixed set of tab stops


int main(){
        	
	int count, c, space;
	count = 0;
	space = 0;
	while ((c = getchar()) != EOF){
	
		if (c == '\t'){
			space = (tabstops - (count % tabstops)); 

			while (space > 0){
				
				putchar(' ');	
				space--;
			}
		}
		else {
		
			putchar(c);
			++count;
		}

		if (c == '\n'){
			count = 0;
		}
	}
	return 0;
}

/*
 * 		tabstops set as 8
 *		hi      hi   
 *		hi      hi   
 *		you     you  
 *		you     you  
 *		there   there
 *		there   there
 *
 *		tabstops set as 10
 *		hi      hi     
 *		hi        hi   
 *		you     you    
 *		you       you  
 *		there   there  
 *		there     there
 *
 *
 *
 *
 *
 * */
