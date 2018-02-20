#include <stdio.h>

int main(){
int x;
printf("Choose 1 or 2\n");
scanf("%d",&x);
switch(x){
case 1:
printf("You chose %d\n",x);
break;
case 2:
printf("You chose %d\n",x);
break;
default:
printf("You chose any other number that is not either 1 or 2\n");
}


return 0;
}
