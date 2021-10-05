/*
 *	Write a program to print a histogram of the lengths of words in its input. It 
 *	is easy to draw the histogram with the bars horizontal; a vertical orientation
 *	is more challenging.
 *	
 * */
#include<stdio.h>

void main(){
	// Here I will use * to represent the histogram
	int c, nWords;
	nWords = 0;

	while((c = getchar()) != EOF){
		
		if(c != ' ' && c != '\t' && c != '\b' && c != '\n'){
			
			++nWords;

		}
		if(nWords != 0){
		
			printf("*");
			--nWords;
		}
		 else {
		
			printf("\n");
		}
	}

}

/*
 *	input:	Hello world I like programming number 100 
 *	
 *	output:
 *
 *	*****                                     
 *	*****                                     
 *	*                                         
 *	****                                      
 *	***********                               
 *	******                                    
 *	***                                       
 *
 *
 * */
