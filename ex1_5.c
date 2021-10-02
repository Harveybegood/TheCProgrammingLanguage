/*
 *	Modify the temperature conversion program to print the table in reverse order,
 *	that is, from 300 degrees to 0.
 *	
 * */

#include<stdio.h>

void main(){
	printf("A table in reverse order to convert fahrenheit to celsius\n");
	printf("%4s %4s\n", "fahr", "cels");

	for(int fahr = 300; fahr >= 0; fahr -= 20){

		printf("%3d %6.1f\n", fahr, 5.0 / 9.0 * (fahr - 32.0));
	
	}

}
