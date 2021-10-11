/*
 *	Write a program to remove trailing blanks and tabs from each line of input, 
 *	and to delete entirely blank lines
 *
 * */

#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void del_trailing_blnks(char line[], int maxline);

int main(){

	int len;
	char line[MAXLINE];
	printf("origin input lines\n");
	
	while ((len = get_line(line, MAXLINE)) > 0){
	
		printf("%s\n", line);
		printf("Length of origin input line %d\n", len);
		if (line[len] == '\0'){

			del_trailing_blnks(line, len);
		}
	}

	/*printf("output each line after removing lines required\n");
	while (line != '\0'){
	
		del_trailing_blnks(line, len);
	}*/

	return 0;	
}

int get_line(char s[], int lim){

	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
	
		s[i] = c;
	}

	if (c == '\n'){
	
		s[i] = c;
		++i;
	}

	s[i] = '\0';

	return i;
}

void del_trailing_blnks(char s[], int lim){

	int i;
	i = 0;

	while (s[lim - 3] == ' ' || s[lim - 3] == '\t'){
		s[lim - 3] = '\t';
		s[lim - 2] = '\0';
		--lim;
	} 

	for (i = 0; i < lim - 1; ++i){
	
		printf("%c", s[i]);
	}
	printf("\nLength after removing trailing blanks and tabs %d\n", lim);
}

/*
 *
 *		origin input lines                               
 *		I assume you are using clang                     
 *		I assume you are using clang                     
 *		                                                 
 *	    Length of origin input line 32 
 *	    I assume you are using clang                     
 *	    Length after removing trailing blanks and tabs 30
 *
 *		     	                                                                                 input key "enter" 
 *		
 *
 *		Length of origin input line 1                                                                                                                                                     Length after removing trailing blanks and tabs 1
 *		
 *		input key "space"
 *		
 *
 *
 *		Length of origin input line 2                    
 *		                                                                                         Length after removing trailing blanks and tabs 2 
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * */
