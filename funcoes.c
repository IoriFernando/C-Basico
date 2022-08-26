#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	/*Funções
	São bloco de códicos que só são execucados quando sõa chamados, onde pode passar
	dados e parâmetros
	As funções usualmente são usadas quando uma determinada ação é realizada diversas vezes*/
	
	/*Funções predefinidas
	São a funções que o C já possui como base exemplo a função main que é a primeira função 
	a ser chamada quando o executável é aberto ou como a função printf que exite texto na tela*/
	
	/*Criação de uma função 
	fora da função main a criação de uma função tem a seguinte síntaxe:
	
	tipo_de_retorno nome_da_função (){
		//código a ser executado
	}*/	

	//as funções devem ser declaradas antes da função main 
	void minhafuncao(){
		printf("A função está funcionando perfeitamente");
		//void é o tipo de retorno vazio
		/*para a chamanda na função dentro da main basta utilizar a seguinte síntaxe;
		nome_da_função ();
		*/	
	}
	
	/*Funções com parâmetros
	Parâmetros dentro das funções funcionam como variáveis dentro dela podendo receber 
	múltiplos parâmentros para seus determinados fins*/
	
	int soma( int num1, int num2){
		return num1+num2;
	}
	
	
	//As funções podem ser declarada mas não definidas ex.:
	void funcaoteste();
	//ir a linha 62
	
	
	/*Funções recursivas 
	São funções que há uma técnica que ela se chamar a si mesma a fim de resolver problemas
	complexos de maneira mais simples exemplo da matemática o fatorial*/
	
	
int main(){
	setlocale(LC_ALL,"Portuguese");
	//chamada da função minhafuncao
	minhafuncao();
	
	int a,b;
	printf("\nDefina um número inteiro: ");
	scanf("%d",&a);
	printf("Defina outro número inteiro: ");
	scanf("%d",&b);
	
	//chamada da função soma
	printf("A soma dos dois numero é igual a %d",soma(a,b));
	
	// chamada da função funcaoteste
	funcaoteste();
	

}


//aqui a função é definida
void funcaoteste(){
	printf("\nA função declarada antes foi definida com sucesso");
}
