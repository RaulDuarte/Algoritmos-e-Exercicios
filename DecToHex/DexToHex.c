#include <stdio.h>

void decToHexa(int n) 
{     
    char hexaDeciNum[100]; 

    int i = 0; 
    if(n == 0){
        printf("%c\n", '0');
    }else{
        while(n!=0) 
        {    
            int temp  = 0; 
            temp = n % 16; 
            
            if(temp < 10) 
            { 
                hexaDeciNum[i] = temp + 48; 
                i++; 
            } 
            else
            { 
                hexaDeciNum[i] = temp + 55; 
                i++; 
            } 
            
            n = n/16; 
        } 
        
        for(int j=i-1; j>=0; j--) 
            printf("%c", hexaDeciNum[j]);
        printf("\n");
    }
} 

int main() 
{ 
    int n;

    while (scanf("%d", &n) != EOF)
    {
        decToHexa(n); 
    }
    
    return 0; 
}