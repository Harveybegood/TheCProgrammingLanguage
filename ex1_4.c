/*
 *	Write a program to print the corresponding Celsius to Fahrenheit table
 *
 * */

#include<stdio.h>

void main(){

	printf("A table of conversion of Celsisu to Fahrenheit\n");
	printf("%4s %7s\n", "fahr", "celsius");

	float fahrenheit, celsius;
	int lower, upper, step;
	lower = -20;
	upper = 120;
	step = 10;
	celsius = lower;

	while(celsius <= upper){
		
		fahrenheit = celsius * 9.0 / 5.0 + 32.0;
		printf("%4.0f %7.0f\n", celsius, fahrenheit);
		celsius += step;
	}
}

A table of conversion of Celsisu to Fahrenheit
 fahr celsius                                  
  -20      -4                                  
  -10      14                                  
    0      32                                  
   10      50                                  
   20      68                                  
   30      86                                  
   40     104                                  
   50     122                                  
   60     140                                  
   70     158                                  
   80     176                                  
   90     194                                  
  100     212                                  
  110     230                                  
  120     248                                  

