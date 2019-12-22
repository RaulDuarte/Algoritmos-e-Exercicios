#include <stdio.h>
#include <stdlib.h>

long long fibonacciRecursivo (int n){

    if(n==1){
        return 0;
    }else if(n==2) {
        return 1;
    }else{
        return fibonacciRecursivo(n-1)+fibonacciRecursivo(n-2);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    scanf ("%d", &n);
    printf ("%lld\n", fibonacciRecursivo (n));
    return 0;
}
