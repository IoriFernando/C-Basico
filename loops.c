#include <stdio.h> //biblioteca padrão de entradas e saídas
#include <stdlib.h> //biblioteca que permite a alocação de memória
#include <locale.h> // permite a função setlocale() para usar caracteres especiais como acentos

int main(){
	setlocale(LC_ALL, "Portuguese");
	
/* Loops
	Os loops podem executar um bloco de código desde que uma condição especificada seja alcançada.
	Os loops são úteis porque economizam tempo, reduzem erros e tornam o código mais legível.
*/	

/* while
	O loop while percorre um bloco de código enquanto uma condição especificada for verdadeira.
	síntaxe:	
	while(condição){
	comandos;
	}
*/

int i;

while(i<5){
	printf("%d\t",i);
	i++;
}
	printf("\n");

/* do while 
	é uma variação do while, mas é executada de maneira diferente pois primeiro executa depois checa a condição.
	síntaxe:
	
	do{
	comandos;
	}while (condição)
*/

	int j=5;
	do{
		printf("%d\t",j);
		j++;
	}while(j<10);
	
	printf("\n");

/* For 
	o for é utilizado quando as quantidade de repetições de cado comando é conhecido pois no comando há definição
	da quantidades de repertições e é utilizado uma variável pra o controle.
	síntaxe:
	for(parâmentro 1; parâmentro 2; parâmentro 3){
	comandos;
	}
*/

	int k;
	for(k=10;k<15;k++){
		printf("%d\t",k);
	}

	return 0;
}
