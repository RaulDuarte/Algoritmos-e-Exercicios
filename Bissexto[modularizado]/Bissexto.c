#include <stdio.h>

int bissexto(int ano){
	return (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0;
}
int main() {
  int n;
  scanf("%d", &n);
  if(bissexto(n)) {
    printf("ANO BISSEXTO\n");
  } else {
    printf("ANO NAO BISSEXTO\n");
  }
}