/*
 *	Write a program to print all input files that are longer than 80 characters.
 *
 * */

# include <stdio.h>
# define MAXLINE 1000

int get_line(char line[], int maxline);

int main(){

	int len;
	char line[MAXLINE];
	
	while ((len = get_line(line, MAXLINE)) > 0){

		if (len > 80){
		
			printf("%d - %s\n", len, line);
		}
		else{
			printf("This line is No longer than 80\n");
		}
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
/*		
 *		input:
 *		No dedicated boot DIP switches are reserved for serial download mode on i.MX 6 SABRE-SD. 
 *		There are various ways to enter
 *		serial download mode. One way is to set the boot mode to boot from SD slot SD3 (set SW6 DIP switches 2 and 7 to on, and the rest
 *		are off). Do not insert the SD card into slot SD3, and power on the board. After the message "HID Compliant device" is displayed,
 *		the board enters serial download mode. Then insert the SD card into SD slot SD3. Another way to do this is to configure an invalid
 *		boot switch setting, such as setting all the DIP switches of SW6 to off.
 *		
 *		output:
 *		90 - No dedicated boot DIP switches are reserved for serial download mode on i.MX 6 SABRE-SD. 
 *
 *		This line is No longer than 80
 *		129 - serial download mode. One way is to set the boot mode to boot from SD slot SD3 (set SW6 DIP switches 2 and 7 to on, and the rest
 *
 *		130 - are off). Do not insert the SD card into slot SD3, and power on the board. After the message "HID Compliant device" is displayed,
 *
 *		131 - the board enters serial download mode. Then insert the SD card into SD slot SD3. Another way to do this is to configure an invalid
 *
 *		This line is No longer than 80
 *
 *
 *
 *
 * */
