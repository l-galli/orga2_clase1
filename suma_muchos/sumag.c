#include <stdio.h>

extern int sumag(int, int, int, int, int, int, int, int);

int main(){
	
	sumag(1, 1, 1, 1, 1, 1, 1, 1);

	register int i asm ("rax");

	printf("%d", i );

	printf("\n");

	return 0;
}