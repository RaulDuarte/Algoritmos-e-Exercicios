#include<stdio.h>

double calcula_imc(double altura, double peso){
	return peso/(altura * altura);
}

void imprime_resposta(double imc){
	if(imc < 16.0) printf("Magreza grave");
	else if(imc < 17.0) printf("Magreza moderada");
	else if(imc < 18.5) printf("Magreza leve");
	else if(imc < 25.0) printf("Saudavel");
	else if(imc < 30.0) printf("Sobrepeso");
	else if(imc < 35.0) printf("Obesidade Grau I");
	else if(imc < 40.0) printf("Obesidade Grau II (severa)");
	else printf("Obesidade Grau III (morbida)");
	printf("\n");
}

int main() {
  double a, p, imc;
  scanf("%lf %lf", &a, &p);
  imc = calcula_imc(a,p);
  imprime_resposta(imc);
}

