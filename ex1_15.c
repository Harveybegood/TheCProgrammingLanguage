/*
 *	Rewrite the temperature conversion program of Section 1.2 to use a function
 *	for conversion.
 *
 * */

// I shall just do a program that converts temperature from Fahranheit to celsius

#include<stdio.h>

float temp_conversion(int fahr, int fixval);

int main(){
	int fahr, step;
	float fixval;
	step = 20;
	fixval = 32.0;
	printf("A table of conversion of fahrenheit to celsius\n");
	for(fahr = 0; fahr <= 300; fahr += step){
	
		printf("%3d %6.1f\n", fahr, temp_conversion(fahr, fixval));
	}
	
}

float temp_conversion(int fahr, int fixval){
	
	return 5.0 / 9.0 * (fahr - fixval);

}

/*
 *	A table of conversion of fahrenheit to celsius
 *	  0  -17.8                                    
 *	  20   -6.7                                    
 *	  40    4.4                                    
*	  60   15.6                                    
 *	  80   26.7                                    
 *	  100   37.8                                    
 *	  120   48.9                                    
 *	  140   60.0                                    
 *	  160   71.1                                    
 *	  180   82.2                                    
 *	  200   93.3                                    
 *	  220  104.4                                    
 *	  240  115.6                                    
 *	  260  126.7                                    
 *	  280  137.8                                    
 *	  300  148.9                                    
 *
 *
 *
 *
 *
 * */
