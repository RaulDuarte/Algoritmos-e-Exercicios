#include<stdio.h>

int main() {

  int n;

  scanf("%d", &n);

  if((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) {
    printf("ANO BISSEXTO\n");
  } else {
    printf("ANO NAO BISSEXTO\n");
  }
}

