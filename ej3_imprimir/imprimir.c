#include <stdio.h>

extern void imprime_parametros(const char*, int, double, char*);

int main(){
	
	char* s = "hola";
	int a = 2;
	double b = 3.1;

	imprime_parametros("%d, %f, %s \n", a, b, s);
	//imprime_parametros("%f", b);
	//printf("%d, %f, %d", a, b, s);
	//register int i asm ("rax");

	//printf("%d", i );

	return 0;
}