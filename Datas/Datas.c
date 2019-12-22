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
	int dia, mes, ano, n, i;
	scanf("%d", &n);
	for(i=0; i < n; i++){
		scanf("%d %d %d", &dia, &mes, &ano);
		if(check(dia, mes, ano)) printf("DATA VALIDA\n");
		else printf("DATA INVALIDA\n");
	}
}
