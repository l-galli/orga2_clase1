#include <stdio.h>

extern int suma(int, int);

int main(){
	
	int res;

	suma(44, -3);

	register int i asm ("rax");

	printf("%d", i );

	return 0;
}