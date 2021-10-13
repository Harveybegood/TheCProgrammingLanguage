/*
 *	rewrite the longest-line program with line, longest, and max as external variables.
 *	
 *	Mainly focus on that declaration may be an explicit extern statement or may be 
 *	implicit from context.
 *
 * */

#include <stdio.h>
#include "externhead.h" // implicit extern statement


//#define MAXLINE 1000

int max;
char line[];
char longest[];

int get_line(void);
void copy(void);

int main(){

	int len;
	//extern int max;
    //extern char longest[]; 
	max = 0;
	while ((len = get_line()) > 0){
	
		if (len > max){
			max = len;
			copy();
		}
	}

	if (max > 0){
	
		printf("%s", longest);
	}
	
	return 0;
}

int get_line(void){
	int i, c;
	
	//extern char line[]; 

	// utilize getchar() to get each next line if there is any
	
	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
		
		line[i] = c;
	}

	if (c == '\n'){

		line[i] = c;
		++i;
	}

	line[i] = '\0';

	return i;
}

void copy(void){
	int i;
	
	//extern char line[];
	//extern char longest[];
	
	i = 0;	
	while ((longest[i] = line[i]) != '\0'){
		
		++i;
	}
}
