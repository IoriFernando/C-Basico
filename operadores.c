#include <stdio.h>

int main(){
	/*
	C divide os operadores nos seguintes grupos:

		Operadores aritméticos (+ soma, - subtração, / divisão, % resto, ++ incremento, -- decremento)
		Operadores de atribuição (= atribuição)
		Operadores de comparação ( == igual, != diferente, > maior que, < menor que, >= maior ou igual, <= menor ou igual)
		Operadores lógicos (&& and, || or, ! not)
		Operadores bit a bit (sizeof para encontrar a quantidade de bit utilizados ** saida %lu por ser um int longo)
		
		tamanhos dos bit dos tipos
		int	2 or 4 bytes
		float	4 bytes
		double	8 bytes
		char	1 byte			
	*/
	
	int a,b,c;
	a = 10;
	b = 20;
	c = 3;
	float d = b/a;
	
	printf("Tendo:\n a = 10 \t b = 20 \t c = 3\n Temos: \n");
	printf("soma a + b : %d\n",a+b);
	printf("subtracao a - b : %d\n",a-b);
	printf("Divisao b/a : %.2f\n",d);
	printf("Resto da divisao a/c: %d \n",a%c);
	printf("O tamanho de bit de a : %lu",sizeof(d));
	
	return 0;
}
