#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindromo (char str[201], int i, int j){

    if(i>=j){
        return true;
    }else{
        if(str[i]==str[j]){
            return isPalindromo(str, i+1, j-1);
        }else{
            return false;
        }
    }

}

int main(int argc, char const *argv[])
{
    char str[201];
    while (scanf ("%s", str) == 1) {
        if (isPalindromo (str, 0, strlen(str) - 1)) {
            printf ("sim\n");
        }
        else {
            printf ("nao\n");
        }
    }
    return 0;
}

//Simule EOF with ^D Unix or ^Z Windows 