/*
 *	Write a function reverse(s) that reverses the character string s. Use it to write a
 *	program that reverses its input a line at a time. 
 *
 * */

#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void reverseline(char to[], char from[], int maxline);

int main(){

	int len;
	char line[MAXLINE];
	char reversed_line[MAXLINE];
	
	while ((len = get_line(line, MAXLINE)) > 0){
	
		reverseline(reversed_line, line, len);
	}	
	
	printf("%s\n", line);	
	printf("%s\n", reversed_line);
	
	return 0;
}

// get_line: read a line into s, return length

int get_line(char s[], int lim){
	int i, c;
	
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++){
	
		s[i] = c;
	}

	if (s[i] == '\n'){
	
		s[i] = '\n';
		++i;
	}

	s[i] = '\0';
	
	return i;	
}

// reverse: reverse the character string s

void reverseline(char to[], char from[], int lim){
	int i;
	i = 0;
	while ((to[i] = from[lim - i - 1]) != '\0'){
		++i;
	}
}

/*
 *  input:	I assume you are using clang
 *	                            
 * output:	gnalc gnisu era uoy emussa I
 *
 *
 *
 * */
