/*
Uma certa firma fez uma pesquisa de mercado para saber se as pessoas 
gostaram ou n�o de um novo produto lan�ado no mercado. Para isso, forneceu 
o sexo do entrevistado e sua resposta (sim ou  n�o).  Sabendo-se  que  
foram  entrevistadas  2000  pessoas,  fazer  um  algoritmo  que  calcule  e escreva
a)O n�mero de pessoas que responderam sim
b)O n�mero de pessoas que responderam n�o;
c)A porcentagem de pessoas do sexo feminino que responderam sim
d)A porcentagem de pessoas do sexo masculino que responderam n�o
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
 	setlocale(LC_ALL, "Portuguese");
	int i=0, x; int sim=0, nao=0, masculino=0, feminino=0;
	float fem_sim=0, masc_nao=0;
	int sexo, resposta;
	
	printf("Digite quantas pessoas da lista ser�o analisadas: ");
	scanf("%d", &x);
	printf("===INICIANDO A PESQUISA ABAIXO===\n");

	for(i=0; i<x; i++) {
		printf("Digite a op��o referente ao sexo da pessoa.\n1 = Masculino\n2 = Feminino\n\nSua Resposta: ");
		scanf("%d", &sexo);
		printf("Digite a op��o referente a resposta da pessoa.\n1 = Sim\n2 = N�o\n\nSua Resposta: ");
		scanf("%d", &resposta);
		//
		if (sexo==1&&resposta==1) {
			masculino++;	sim++;	
		}
		else if (sexo==1&&resposta==2){
			masculino++;	nao++;	masc_nao++;
		}
		else if (sexo==2&&resposta==1){
			feminino++;	sim++;	fem_sim++;
		}
		else if (sexo==2&&resposta==2){
			feminino++;	nao++;
		}
		else {
			printf("Resposta inv�lida.");
		}
		printf("\n");
	}
	
	printf("O resultado da pesquisa ser� apresentado abaixo.\n");
	printf("N�MERO DE PESSOAS QUE DISSERAM SIM: %d\n", sim);
	printf("N�MERO DE PESSOAS QUE DISSERAM N�O: %d\n", nao);
	printf("PORCENTAGEM DE PESSOAS DO SEXO MASCULINO QUE DISSERAM N�O: %.2f%%\n", ((masc_nao*100)/masculino));
	printf("PORCENTAGEM DE PESSOAS DO SEXO FEMININO QUE DISSERAM SIM: %.2f%%\n", ((fem_sim*100)/feminino));
	
	return 0;
}
