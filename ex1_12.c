/*
 *	Write a program that prints its input one word per line.
 *
 * */

#include<stdio.h>

void main(){

	int c;

	while((c = getchar()) != EOF){
		if(c != ' ' && c != '\t' && c != '\b' && c != '\n'){
			printf("%c", c);
		}	
		else{
			printf("\n");
		}
	}
}

/*
 *	input: hello world!    I like programming 
 *	
 *	output:	
 *		hello                              
 *		world!                             
 *		I                                  
 *		like                               
 *		programming                        
 *
 *
 *
 * */
