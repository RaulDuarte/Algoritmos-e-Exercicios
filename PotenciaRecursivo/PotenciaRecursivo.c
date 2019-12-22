#include <stdio.h>
#include <stdlib.h>

long int potenciaRecursivo(int a, int n){

    if(n==0){
        return 1;
    }else{
        return a * potenciaRecursivo(a, n-1);
    }

}

int main(int argc, char const *argv[])
{
    int a, n;
    scanf ("%d", &a);
    scanf ("%d", &n);
    printf ("%ld\n", potenciaRecursivo (a, n));
    return 0;
}
