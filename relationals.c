#include <stdio.h>



int main(){
	int x,y;
	printf("Enter value for x\n");
	scanf("%d",&x);
	printf("Enter value for y\n");
	scanf("%d",&y);
	if(x == y){
	printf("EQUALS\n");
	}else if( x != y){
	printf("NOT EQUALS\n");
	}

	if(x < y){
	printf("X IS MINOR THAN Y\n");
	}else{
	printf("X IS BIGGER THAN Y\n");
	}

	

}
