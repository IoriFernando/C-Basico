#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Strings
		Em c strings são utilizados para textos e caracteres.
		Em c não há maneira fácil pra declaração de variáveis tipo strings para isso é utilizado
		char e é criado uma array (matriz) para a criação de strings.
	*/
	
	char minhastring[]= "Olá mundo";
	printf("Minha string = %s",minhastring);
	//Para a saída é utilizado o %s para demostra a utilização de strings
	
	// o acesso a os dados de uma string se dar da mesma maneira de uma array
	printf("\nPrimeira letra = %c",minhastring[0]);
	//Para saída é utilizado o %c para demostra um único caractere
	
	//Modificação de strings se dar da mesma maneira que arrays
	minhastring[0]='D';
	printf("\nModificando a primeira letra por 'D' = %s",minhastring);
	minhastring[0]='O';
	
	//Outra maneira de declaração de strings
	char outrastring[]= {'O','l','á',' ','m','u','n','d','o','\0'};
	/*quando há declaração utilizando esse método é necessario usar o '\0' para terminar a string
	  pois funciona como caractere de terminação nulo*/
	printf("\nSegundo tipo de declaração = %s",outrastring);
	
	
	//Diferença entre as declaraçoes
	/* Aa única diferença entre os dois tipos de declarações é a maneira que uma é mais facil que e
	outra pois n precisa incluir o '\0'*/
	printf("\nTamanho da primeira declaração = %lu",sizeof(minhastring));
	printf("\nTamanho da segunda declaração = %lu",sizeof(outrastring));
	
	//Entrada de uma string
	char primeironome[10];
	printf("\nDefina seu primeiro nome: ");
	scanf("%s",&primeironome);
	printf("\nOlá, %s",primeironome);	
	
	return 0;
}
