#include <stdio.h>
#include <time.h>

int main(){
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	int c = tm.tm_mday % 2 ;
	(c == 0) ? printf("Today is even\n"): printf("Today is odd\n");


return 0;
}
