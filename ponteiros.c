#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Endereço de memória
	quando há a uma variável é criada é criado também um endereço de memória para essa variável
	para acessa-ló basta usar o operador "&" e para a formatação da sua saída é usado "%p" */
	
	int num1 =30;
	printf("Endereço da variável criada = %p",&num1);
	/*esse é um conceito muito importante pois permite a utilização de ponteiros para trabalhar diretamente
	com os endereços de memória*/ 
	
	/*Ponteiros
	Ponteiros são variáveis que server para referenciar o endereço de memória das variáveis	*/
	
	int num2=32;
	int *prt = &num2;
	
	printf("\nValor da variável declarada = %d",num2);
	printf("\nEndereço na memória usando o operador '&' =  %p",&num2);
	printf("\nEndero utilizando ponteiro = %p",prt);
	printf("\nValor da variável pelo ponteiro = %d", *prt);
	
	
	return 0;
}
