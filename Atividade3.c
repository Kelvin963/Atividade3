#include <stdio.h>
#include <string.h>

int main(){

    int lis1[16];
    int lis2[16];
    int v3 = 0;
    int i;
    int m;

    char calculo[6];
    
    int linha;
    int coluna;
    int ma1[4][4];
    int ma2[4][4];
    int ma3[4][4];


    for(i = 0; i <= 15; i++){
        scanf("%d", &lis1[i]);
    }
    for(i = 0; i <= 15; i++){
        scanf("%d", &lis2[i]);
    }
    
    scanf("%s", calculo);

        for(linha = 0; linha < 4; linha++){
        for(coluna = 0; coluna < 4; coluna++){
            ma1[linha][coluna] = lis1[v3];
            ma2[linha][coluna] = lis2[v3];
            v3++;
        }
    }    

    for(linha = 0; linha < 4; linha++){
        for(coluna = 0; coluna < 4; coluna++){

        if(strcmp(calculo, "soma") == 0){
            ma3[linha][coluna] = ma1[linha][coluna] + ma2[linha][coluna];
            
        }else if(strcmp(calculo, "sub") == 0){
            ma3[linha][coluna] = ma1[linha][coluna] - ma2[linha][coluna];

        }else if(strcmp(calculo, "mult") == 0){
            ma3[linha][coluna] = 0;
            for(m = 0; m < 4; m++){
                ma3[linha][coluna] += ma1[linha][m] * ma2[m][coluna];
            }
        }
    }
}

    for(linha = 0; linha < 4; linha++){
        for(coluna = 0; coluna < 4; coluna++){
            printf("%4d", ma3[linha][coluna]);
        }
        printf("\n"); 
    }
    

    return 0;
}