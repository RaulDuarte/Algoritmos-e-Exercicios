#include<stdio.h>

void imprime_data(int dia, int mes, int  ano){
	char meses_str[12][20] = {"Janeiro", "Fevereiro", "Marco", "Abril",
								"Maio", "Junho", "Julho", "Agosto", "Setembro",
								"Outubro", "Novembro", "Dezembro"};
	printf("%02d de %s de %d\n", dia, meses_str[mes-1], ano);
}

int main(){
	int dia, mes, ano;

	while(scanf("%d %d %d", &dia, &mes, &ano) == 3) imprime_data(dia, mes, ano);
}
