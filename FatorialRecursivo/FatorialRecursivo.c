#include <stdio.h>
#include <stdlib.h>

long long fatorialRecursivo(long int n){

    if(n==0){
        return 1;
    }else{
        return n*fatorialRecursivo(n-1);
    }
}

int main(int argc, char const *argv[])
{
    long int n;

    scanf("%ld", &n);
    printf ("%lld\n", fatorialRecursivo (n));

    return 0;
}
