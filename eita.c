#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char nomeJogador1[10][30], nomeJogador2[10][30], nomeTime1[30], nomeTime2[30], posicao;
    int nivelForca = 0;
    double forcaTime1 = 0, forcaTime2 = 0;

    // fgets(nomeTime1, 30, stdin);
    fflush(stdin);
    scanf("%[^\n]", nomeTime1);

    for (int i = 0; i < 11; i++) {
        scanf("%40[^;];%c;%d", nomeJogador1[i], &posicao, &nivelForca);
        if(posicao == 'G'){
            forcaTime1 += 8 * nivelForca;
        }else if(posicao == 'L'){
            forcaTime1 += 10 * nivelForca;
        }else if(posicao == 'Z'){
            forcaTime1 += 5 * nivelForca;
        }else if(posicao == 'V'){
            forcaTime1 += 8 * nivelForca;
        }else if(posicao == 'M'){
            forcaTime1 += 11 * nivelForca;
        }else if(posicao == 'A'){
            forcaTime1 += 12 * nivelForca;
        }
    }

    // fgets(nomeTime2, 30, stdin);
    fflush(stdin);
    scanf("%[^\n]", nomeTime2);

    for (int i = 0; i < 11; i++) {
        scanf("%40[^;];%c;%d", nomeJogador2[i], &posicao, &nivelForca);
        if(posicao == 'G'){
            forcaTime2 += 8 * nivelForca;
        }else if(posicao == 'L'){
            forcaTime2 += 10 * nivelForca;
        }else if(posicao == 'Z'){
            forcaTime2 += 5 * nivelForca;
        }else if(posicao == 'V'){
            forcaTime2 += 8 * nivelForca;
        }else if(posicao == 'M'){
            forcaTime2 += 11 * nivelForca;
        }else if(posicao == 'A'){
            forcaTime2 += 12 * nivelForca;
        }
    }

    forcaTime1 = forcaTime1 / 100;
    forcaTime2 = forcaTime2 / 100;

    printf("%s: %.2f de forca\n", nomeTime1, forcaTime1);
    printf("%s: %.2f de forca\n", nomeTime2, forcaTime2);

    if (forcaTime1 > forcaTime2){
        printf("%s eh mais forte\n", nomeTime1);
    } else if (forcaTime1 < forcaTime2){
        printf("%s eh mais forte\n", nomeTime2);
    }

    return 0;
}