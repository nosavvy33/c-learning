#include <stdio.h>

int main(){
int x,y;
printf("Arithmetics\n");
printf("Enter x value \n");
scanf("%d",&x);
printf("Enter y value \n");
scanf("%d",&y);
float z = x + y ;
printf("The sum of x + y is %9.1f \n",z);
z = x - y ;
printf("The rest of x - y is %9.1f \n",z);
z = x * y;
printf("The multiplition of x * y is %9.1f \n",z);
z =(float) x /(float) y;
printf("The division of x / y is %9.2f \n",z);

return 0;
}
