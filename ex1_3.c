/*
 *	Modify the temperature conversion program to print a heading above the table
 * */

#include<stdio.h>
void main(){

	float fahrenheit, celsius;
	int lower, upper, step;
	lower = 0; 
	upper = 300;
	step = 20;
	fahrenheit = lower;

	printf("a table of conversion of fahrenheit to celsius\n\n");

	while(fahrenheit <= upper){
		celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
		printf("%3.0f %6.1f\n", fahrenheit, celsius);
		fahrenheit += step;
	}
}

/* 
 *
 
	a table of conversion of fahrenheit to celsius
	                                              
	  0  -17.8                                    
	  20   -6.7                                    
	  40    4.4                                    
	  60   15.6                                    
	  80   26.7                                    
	  100   37.8                                        
	  120   48.9                                        
	  140   60.0                                        
	  160   71.1                                        
	  180   82.2                                        
	  200   93.3                                        
	  220  104.4                                        
	  240  115.6                                        
	  260  126.7                                        
	  280  137.8                                        
	  300  148.9                                                                     *
*/ 
