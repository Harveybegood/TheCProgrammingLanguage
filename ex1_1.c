// Run the "hello, world" program on your system. Experiment with leaving out parts of 
// the program, to see waht error message you get.


#include<stdio.h>

void main(){
// Do an experiment to leave out the \n but and advance a part of codes to next line
	printf("hello, 
			world");
}
// We see several errors and warnings reported after running gcc
// 1, line 9 hints that a warning, meanwhile also canlled an error: missing terminating
// 2, line 10 it is similar to line 9
// 3, error for "world" is not declared and fist use in this function
//  

