#include <stdio.h>

extern void imprime_parametros(int, double, char*);

int main(){
	
	char* s = "hola";
	int a = 2;
	double b = 3.0;

	//imprime_parametros("%d, %f, %s", a, b, s);
	imprime_parametros(a, b, s);
	//printf("%d, %f, %d", a, b, s);
	//register int i asm ("rax");

	//printf("%d", i );

	return 0;
}