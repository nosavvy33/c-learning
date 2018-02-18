#include <stdio.h>



int main(){
int i;

for(i=0;i<5;i++){

	static int x = 5;
	int w = 5 ;
	x += 5;
	w += 5;
	printf("static var = %d \t auto var = %d\n", x, w);
}
	printf("As you can see, the static var kept its value even though it was being 'redefined' through\n every iteration, unlike auto int which was redefined to 5 every time\n");
}
