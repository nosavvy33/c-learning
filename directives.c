#include <stdio.h>
                #ifndef MESSAGE
                        #define MESSAGE "Hello from the header section\n"
                #endif

		#if !defined(GREET)
			#define GREET "Hello, you almost forgot the GREET string"
		#endif 

		#if !defined(COMPARISON)
			#define MAX(x,y) \
			((x) > (y) ? (x) : (y))
		#endif

                int main(){ 
		int x,y;
                printf(MESSAGE);
		printf("Date: %s\n",__DATE__);
		printf("%s\n",GREET);
		printf("Enter x value \n");
		scanf("%d",&x);
		printf("Enter y value \n");
		scanf("%d",&y);
		printf("El nro mayor entre x e y es : %d\n",MAX(x,y));                
return 0;
                }

