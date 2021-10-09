/*
 *	Revise the main routine of the longest-line program so it will correctly print the
 *	length of arbitrarily long input lines, and as much as possbile of the text.
 *
 * */

#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main(){

	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;

	printf("\nStart to print the length of input line and it's characters\n");		

	while ((len = get_line(line, MAXLINE)) > 0){
		if (len > max){
		  //printf("Length of input lines %d\n", len);
			max = len;
			copy(longest, line);
			printf("%d - %s\n", len, longest);
		}
	}

	if (max > 0){
	
		printf("Longest line\n %s", longest);
	}
	
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

void copy(char to[], char from[]){

	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0'){
		
		++i;
	}
}
/*
   tart to print the length of input line and it's characters 
   int len;                                                    
   int max;                                                    
   char line[MAXLINE];                                         
   char longest[MAXLINE];                                      
                                                               
   max = 0;                                                    
   while ((len = get_line(line, MAXLINE)) > 0){                

   9 - int len;                                                
                                                               
   20 - char line[MAXLINE];                                    
                                                               
   23 - char longest[MAXLINE];                                 
                                                               
   45 - while ((len = get_line(line, MAXLINE)) > 0){           
                                                               
   Longest line                                                
    while ((len = get_line(line, MAXLINE)) > 0){               

 *		
 *
 *
 *
 * */
