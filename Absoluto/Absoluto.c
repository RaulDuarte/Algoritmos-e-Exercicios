#include <stdio.h>

void absoluto(int *x){
    if(*x < 0){
        *x *= -1;
    }
}

int main() {
    int x;
    int n, i;

    scanf("%d", &n);
    
    for(i=0; i<n; i++) {
        scanf("%d", &x);
        absoluto(&x);
        printf("%d\n", x);
    }
    return 0;
}