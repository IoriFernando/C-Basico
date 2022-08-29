#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	/*Structs (estruturas)
		Em C structs são uma maneira que organizar variáveis de tipos diferentes em 
		um único lugar podendo ser nomeada de maneiras diferentes.
		
		sintaxe
		fora da função main e declaração funciona da seguinte maneira:
		
		struct nome_da_struct {
			tipo_do_dado nome_da_variável;  //membro da structs
			...			  ...
			...			  ...
			tipo_do_dado nome_da_variável; 	//membro da structs
		}
	*/
		
struct minhastruct{
	int num;
	char letra;
};


int main(){
	setlocale(LC_ALL, "Portuguese");	
	//para a criação dentro da funcão main funciona da seguinte maneira:
	struct minhastruct s1; //Criação de uma struct chamada s1
	
	//atribuição de valores
	s1.num = 1;
	s1.letra= 'A';
	//Exibição dos valores
	printf("Primeiro valor int atribuido na struct: %d\n",s1.num);
	printf("Primeiro valor char atribuido na struct: %c\n",s1.letra);
	
	//atribuição simplificada
	struct minhastruct s2 ={2,'B'}; //Criação de uma struc chamada s2
	printf("Primeiro valor int atribuido na struct: %d\n",s2.num);
	printf("Primeiro valor char atribuido na struct: %c",s2.letra);
	
	return 0;
}
