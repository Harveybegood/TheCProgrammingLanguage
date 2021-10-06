/*
 *	Write a program to print a histogram of the frequencies of different characters
 *	in its input.
 *
 * */

#include<stdio.h>

void main(){
	// this program will follow the statments in the context, which says there are 
	// twelve categories of input. there will be 12 different histograms
	
	printf("\nEnter characters: ");
	
	int c, i, nwhite, nother;
	int ndigit[10];
	nwhite = nother = 0;

	for(i = 0; i < 10; i++){
		ndigit[i] = 0;
	}

	while((c = getchar()) != EOF){
	
		if(c >= '0' && c <= '9'){
			++ndigit[c - '0'];
		}
		else if(c == ' ' || c == '\n' || c == '\t'){
			++nwhite;
		}
		else{
			++nother;
		}
	}

	printf("print histogram of the frequencies of different characters\n");
	printf("histogram for digits\n");
	for(i = 0; i < 10; i++){
		while(ndigit[i] != 0){
			printf("*");
			--ndigit[i];
		}
		printf("\n");
	}
	printf("histogram for nwhite\n");
	while(nwhite != 0){
		printf("*");
		--nwhite;
	}
	printf("\nhistogram for nother\n");
	while(nother != 0){
		printf("*");
		--nother;
	}
	printf("\n");
}

/*
 *      Enter characters: hello world  0 1 2 3 4 5 6 7 8 9 1 1 1 5 5 5 9 9 9 9 
 *                                                                             
 *      print histogram of the frequencies of different characters             
 *      histogram for digits                                                   
 *           *                                                                      
 *           ****                                                                   
 *           *                                                                      
 *           *                                                                      
 *           *                                                                      
 *           ****                                                                   
 *           *                                                                      
 *           *                                                                      
 *           *                                                                      
 *           *****                                                                  
 *       histogram for nwhite                                                             *           ***************************                                            
 *       histogram for nother                                                             *           **********   
 *
 *
 *
 *
 *
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
