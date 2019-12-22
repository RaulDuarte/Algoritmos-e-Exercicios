#include <stdio.h>

int main() {

    int alturaPulo, numCanos;
    int canos[100];
    int indice;
    
    scanf("%d %d", &alturaPulo, &numCanos);

    for (indice = 0; indice < numCanos; indice++){
        scanf("%d", &canos[indice]);
    }

    for(indice = 0; indice < numCanos-1; indice++){
        if(canos[indice]-canos[indice+1] > alturaPulo || canos[indice+1]-canos[indice] > alturaPulo){
            printf("GAME OVER\n");
            return 0;
        }
    }

    printf("YOU WIN\n");
    
    return 0;
}