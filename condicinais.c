#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	/*
	Condicionais
	São comandos de tomadas de dicisão que são realizada caso a condição declarada seja verdadeira
	Havendo no c os seguintes condicionais:
	if : uma parte do codigo é executada de a codição no comando for verdadeira
	else: O codigo é executado se as condições anteriores forem falsas
	else if: Caso uma condição anterior não for executada uma nova codição é proposta para ser executada
	switch: e dado alternantiva para qual bloco de comandos executar
	*/
	
	setlocale(LC_ALL, "Portuguese"); // comando para usar acentos
	int a,b,c,d;
	a=1;
	b=2;
	c=3;
	d=4;
	

	if (b>a){
		printf("a é maior que b\n");
	}
	
	
	if(b>c){
		printf("b é maior que c\n");
	}else{
		printf("b é menor que c\n");
	}
	
	if(a>b){
		printf("a é maior que b\n");
	}else if(c>b){
		printf("c é maior que b\n");
	}
	
	/*
	Maneira de condicional if e else curta
	variable = (condition) ? expressionTrue : expressionFalse;
	*/
	(d>a) ? printf("d é maior que c\n") : printf("a é maior que d\n");
	
	// swich é utilizado quando há muitas condinções ou quando há opções de esconha
	int e;	
	printf("Esconha um número de 1 a 4 : ");
	scanf("%d",&e);
	
	switch(e){
		case 1:
			printf("O número escolhido foi 1\n");
			break;
		case 2:
			printf("O número escolhido foi 2\n");
			break;	
		case 3:
			printf("O número escolhido foi 3\n");
			break;
		case 4:
			printf("O número escolhido foi 4\n");
			break;
		default:
			printf("Opção inválida\n");
			break;
	}
	
	return 0;
}
