#include<stdio.h>

int bissexto(int ano){
	return (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0;
}

int check(int dia, int mes, int ano){
	int dias_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(bissexto(ano)) dias_mes[1]++;
	if(1 <= mes && mes <= 12 && ano >= 0){
		if(1 <= dia && dia <= dias_mes[mes-1]) return 1;
	}
	return 0;
}

int main(){
	int dia, mes, ano;
	scanf("%d %d %d", &dia, &mes, &ano);
	dia--;
	while(!check(dia, mes, ano)){
		dia--;
		if(dia < 0){
			dia = 31;
			mes--;
		}
		if(mes < 0){
			mes = 12;
			ano--;
		}
	}
	printf("%d %d %d\n", dia, mes, ano);
}
