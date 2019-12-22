#include<stdio.h>

int espelho(int n1, int n2){
	int flag = 1;
	int j;
	int i;
	int d_A[20];
	int d_B[20];
	for(i=0; i < 20; i++){
		d_A[i] = 0;
		d_B[i] = 0;
	}
	i = 0;
	while(n1 != 0 || n2 != 0){
		d_A[i] = n1 % 10;
		d_B[i] = n2 % 10;
		n1 /= 10;
		n2 /= 10;
		i++;
	}

	for(j=0; j < i; j++){
		if(d_A[j] != d_B[i-j-1]) flag = 0;
	}
	return flag;
}
int main() {
  int n1, n2;
  scanf("%d %d", &n1, &n2);
  if(espelho(n1,n2)) {
    printf("espelho\n");
  } else {
    printf("nao espelho\n");
  }
  return 0;
}
