#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool pilha[100];
bool resultado=1;
int topo=-1;

void zera(){
    for (int i = 0; i < 100; i++)
    {
        pilha[i]=0;
    }
}

void coloca(){
    topo++;
    pilha[topo] = 1;
}

bool vazio(){
    if(topo==-1) return true;
    else return false;
}

void limpa(){
    if(vazio()==false){
        resultado=0;
    }else{
        if(pilha[topo]==1){
            pilha[topo]==0;
            topo--;
        }else{
            resultado=0;
        }
    }
}

int main(int argc, char const *argv[])
{

    int numLinhas;

    zera();
    
    scanf("%d",&numLinhas);    
    
    while(numLinhas){
        numLinhas--;

        char str[100];
        while (scanf ("%s", str) == 1) {
        
            for (int i = 0; i < strlen(str)-1; i++)
            {
                switch (str[i])
                {
                case '{':
                    coloca();
                    break;
                case '}':
                    limpa();
                    break;
                }
            }
            break;
        }
    }

    if(vazio() && resultado==1){
        printf("S\n");
    }else{
        printf("N\n");
    }

    return 0;
}
