#include <stdio.h>

// this var points to the extern int number var
int number;

//this func is declared here, yet not defined
extern void printmessage();

int main(){
	number = 5 ;
	printmessage();

}
