#include <stdio.h>
#include <stdlib.h>

int chocolate(int dinheiro, int preco, int promocao){
  int consumido,extra,embalagens;

  consumido=dinheiro/preco;
  embalagens=consumido;

  while (embalagens>=promocao){
    extra=embalagens/promocao;
    consumido=consumido+extra;
    embalagens=embalagens%promocao+extra;
  }
  return consumido;
}

int main() {
  int t, n, c, m, i;
  scanf("%d", &t);
  for (i=0; i<t; i++) {
    scanf("%d %d %d", &n, &c, &m);
    printf("%d\n", chocolate(n, c, m));
  }
  return 0;
}

