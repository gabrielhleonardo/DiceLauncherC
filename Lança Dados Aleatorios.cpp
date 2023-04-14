#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(void){
	char sair;
	int i;
	float dadosAtaque[3],dadosDefesa[3],somaAtaque=0,somaDefesa=0;
	srand (time(NULL));
	setlocale(LC_ALL, "portuguese");
	do{
	for(i=0;i<3;i++){
		dadosAtaque[i] = rand() %6+1;
		somaAtaque = dadosAtaque[i] + somaAtaque;
	}
	for(i=0;i<3;i++){
		dadosDefesa[i] = rand() %6+1;
		somaDefesa = dadosDefesa[i] + somaDefesa;
	}
	printf("Dados de Ataque:\t");
	for(i=0;i<3;i++){
		printf("%.0f\t", dadosAtaque[i]);
	}
	printf("\nDados de Defesa:\t");
	for(i=0;i<3;i++){
		printf("%.0f\t", dadosDefesa[i]);
	}	
	printf("\n\nTOTAL ATAQUE...................: %.0f",somaAtaque);
	printf("\n\nTOTAL DEFESA...................: %.0f",somaDefesa);
	if(somaAtaque>somaDefesa){
		printf("\n\n============ ATAQUE VENCEU!!================");
	}else{
		printf("\n\n============ DEFESA VENCEU :) ==============");
	}
	printf("\n\nDeseja Continuar?\n\nS ou N :\t");
	scanf(" %c", &sair);
	somaAtaque=0;
	somaDefesa=0;
	
	}while(sair=='S' || sair=='s');
	
	return 0;
}
