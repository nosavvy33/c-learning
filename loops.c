#include <stdio.h>


int main(){
char x[] = "*";
for(int k = 0 ; k < 10; k++){
for(int i = k; i < 10; i++){
printf("%s",x);
}
printf("\n");
}

return 0;
}
