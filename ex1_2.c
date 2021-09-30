// Experiment to find out what happens when printf's argument string contains \c, where 
// c is some characte not listed above.

#include<stdio.h>

void main(){

	printf("Find out what happens when argument string contains \c \n");
}

// OS Platform: Linux ubuntu 5.4.0-86-generic #97-Ubuntu SMP Fri Sep 17 19:19:40 UTC 2021// x86_64 x86_64 x86_64 GNU/Linux 

// Compiler tool: gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0

// ex1_2.c:8:9: warning: unknown escape sequence: '\c'
// 8 |  printf("Find out what happens when argument string contains \c \n");
//
