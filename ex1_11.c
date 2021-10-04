/*
 *	How would you test the word count program? What kinds of input are most likely
 *	to uncover bugs if there are any?
 *
 * */

#include<stdio.h>
#define IN 1 	/*inside a word*/
#define OUT 0   /*outside a word*/
/*count lines, words, and characters in input*/

void main(){

	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	
	while((c = getchar()) != EOF){
		++nc;
		if(c == '\n'){
			++nl;
		}
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
		}
		else if(state == OUT){
			state = IN;
			++nw;
		}
	}

	printf("lines = %d words = %d charachers = %d\n", nl, nw, nc);
}

/*case 1: if there is no space between two words, which will count it as 1 word, as below

helloworld                          
lines = 1 words = 1 charachers = 11 

case 2: if a number input, which the program will also count it as 1 word, actually it
	is not.

*/
