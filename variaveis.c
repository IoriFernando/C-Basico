#include <stdio.h> //declaração da biblioteca de entradas e saídas padrão

int main(){
	/* a declaração de variáveis em c funciona da seguinte maneira:
	tipo_da_variável nome_da_variável ; 
	*/
	int numerointeiro; 
	//Tipo int é o conjuto dos números inteiros
	float pontoflutuante;
	//Tipo float é do conjuto dos números fracionários
	char caractere= 's';
	// char é para declarar caracteres
	
	/* scanf é o comando de entrada de dados seguindo o padrão:
	scanf("% simbolo que define o tipo de dado" , & (usado para alocar um espaco na memoria) nome da variável);
		%d %i inteiro
		%f float (até 7 dígitos) 
		%lf	double (são float com dupla precisão alocando mais espaco na memória, até 15 dígitos)
		%c char
		%s string
	
	*/
	printf("Digite um numero inteiro:");
	scanf("%d", &numerointeiro);
	printf("Digite um ponto flutuante:"); 
	scanf("%f", &pontoflutuante);


	printf("O Numero inteiro digitado foi: %d \n", numerointeiro);
	printf("O Ponto flutuante digitado foi: %.3f \n", pontoflutuante);
	printf("Declaração de um caractere : %c \n", caractere);
	
	
	/*
	Para declara uma variável constante basta adicionar const antes do tipo:
	const int num1 = 10;
	caso o valor de num1 seja alterado a linha ocorrerá erro
	*/
	
	return 0;
}
