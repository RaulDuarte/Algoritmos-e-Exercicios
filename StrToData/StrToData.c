#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mesf(char mes[10]){
  char vmes[12][10]={"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
  int i,j,tam,comp;

  tam=strlen(mes);

  for(i=0;i<12;i++){
    comp=0;
    for(j=0;j<tam;j++){
      if(mes[j]==vmes[i][j]){
      comp++;
      }
    }
    if (comp==tam){
      return i+1;
    }
  }
  return 0;
}

int main(void) {

  int dia,ano;
  char mes[10];

  while (scanf("%d %*c %*c %s %*c %*c %d",&dia,mes,&ano)!=EOF){
    printf("%d %d %d\n",dia,mesf(mes),ano);
  }

  return 0;
}
