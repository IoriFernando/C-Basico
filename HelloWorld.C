// Comentário em linhas 
/* Comentário em paragráfos */
   
/* Sempre no começo de arquivos em C é utilizada para delaração
das bibliotecas que serão utilizadas a padrão é utilizada a <stdio.h> 
que é usada para cabeçario padrão de entrada e saídas  */

//Todas a instruções em C devem ser terminadas com ";" obrigatóriamente

#include <stdio.h>

/* Para qualquer instruções que serão feitas em C são declaradas em funções por
hora todas as instruções são definida na função chamada main que quando delarada
é a primeira função a ser chamada em todo arquivo em C.*/


int main(){
	/* Para qualquer instruções que serão feitas em C são declaradas em funções por
	hora todas as instruções são definida na função chamada main que quando delarada
	é a primeira função a ser chamada em todo arquivo em C.*/

	printf("Hello Word!");
	/* printf("  "); é o comando utilizado para exibir mensagens na tela */
	/*
	    \t	Creates a horizontal tab	
	    \\	Inserts a backslash character (\)	
	    \"	Inserts a double quote character       
	*/
	return 0;
	/* Nessa função main é declarada como do tipo inteiro "int" por isso ao função retornar 0
	como saindo o compilardo entende que a função já cumpriu todas as suas intruções por isso 
	a aplicação e encerrada*/
}

/* Para executar arquivos em C é criado um arquivo ".exe" que é executado ao ser solicitado */
