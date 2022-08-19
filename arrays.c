#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Arrays Matrizes
		São usadas para armazenar vários valores em uma única variável
		Síntaxe:
		
		tipo nome[] = {valor1, valor2, ..., valorN}; 
		*obs.: os valores podem ser ou não declarados.
	
		Acesso ao dados de uma matriz 
		para acessar o dado de uma matriz e necessário utilizar um indice 
		o indice de uma matriz inicial pelo 0 definido o primeiro valore
		
		ex:
		int a[];
		a[0]= primeiro valor;
		a[1]= segundo valor;
		a[3]= terceiro valor;
	
	*/
	
	int a[] ={1,2,3,4,5};
	int i;
	for(i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
	
	
	
	return 0;
}
