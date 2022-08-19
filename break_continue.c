#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Isso é um teste\n");
	
	/*Break 
		Esse comando é utilizado no switch para saltar uma instrunção;
		porém o break também pode ser utilizada para pular as etapas de um loop
		interropendo se caso uma instrução se atendida.
	*/
	
	int i;
	for(i=0;i<11;i++){
		if(i==6){
			break;
		}
		printf("%d\t",i);
	}
	
	printf("\n");
	
	/*Continue
		o continue ele para uma interação de um loop caso uma derterminada condição seja atendido,
		apos isso o loop continua;
	*/
	
	int j;
	for(j=0;j<11;j++){
		if(j==6){
			continue;
		}
		printf("%d\t",j);
	}
	
	
	return 0;
}
