#include <stdio.h>

int main(){

    int valor[10];
    int i;
    int quant;
    int j;

    for(j = 0; j <= 9; j++){
        scanf("%d", &valor[j]); 
    } 

    for(i = 0; i <= 9; i++){
        printf("%d", valor[i]);
        if(i < 9){
            printf(" ");
        }
    }

    printf("\n");

    for(quant = 8; quant >= 0; quant--){
        for(i = 0; i <= quant; i++){             
        
            printf("%d", valor[i] + valor[i+1]);
            valor[i] = valor[i] + valor[i+1];
            if(i < quant){
                printf(" ");
            }

        }
     printf("\n");
    }


    return 0;
}