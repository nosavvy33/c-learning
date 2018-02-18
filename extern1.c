#include <stdio.h>

// this var is declared here, yet not defined
extern int number;

void printmessage(void){
	printf("number is %d\n", number);
}
