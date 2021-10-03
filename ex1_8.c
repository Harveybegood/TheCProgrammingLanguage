/*
 *	Write a program to count blanks, tabs, and newlines.
 *
 * */

#include<stdio.h>

void main(){

	// define three variables for each character constant for blanks, tabs, 
	// and newlines
	
	int count_blanks, count_tabs, count_newlines;
	count_blanks = 0;
	count_tabs = 0;
	count_newlines = 0;
	int c;

	while((c = getchar()) != EOF){
	
		if (c == 0x20){
			// right here, I use Hx to express space, or we can use other 
			// ways to achieve the same effect. such as ' ' ...etc.
			++count_blanks;
		}
		
		if (c == '\t'){
			++count_tabs;
		}

		if (c == '\n'){
			++count_newlines;
		}
	}
	printf("The number of blanks is %d\n", count_blanks);
	printf("The number of tabs is %d\n", count_tabs);
	printf("The number of new lines is %d\n", count_newlines);
}

/*		count each character twice
 * 	
 *		The number of blanks is 2    
 *		The number of tabs is 2      
 *		The number of new lines is 2 
 *
 *
 *
 * */
