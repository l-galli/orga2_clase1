#include <stdio.h>

extern double sumad(double, double);

int main(){
	
	sumad(44, 3.337876);

	register double i asm ("xmm0");

	printf("%2.4f", i );

	printf("\n");

	return 0;
}