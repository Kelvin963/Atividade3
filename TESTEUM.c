#include <stdio.h>
#include <string.h>

const int NUM_JOGADORES = 11;

int main() {
    char time1[31], time2[31];
    char nomes1[NUM_JOGADORES][31], nomes2[NUM_JOGADORES][31];
    char posicoes1[NUM_JOGADORES], posicoes2[NUM_JOGADORES];
    int forcas1[NUM_JOGADORES], forcas2[NUM_JOGADORES];

    // Entrada de dados para o Time 1
    printf("Nome do Time 1: ");
    fgets(time1, sizeof(time1), stdin);
    time1[strcspn(time1, "\n")] = '\0';

    for (int i = 0; i < NUM_JOGADORES; i++) {
        printf("Nome do jogador %d: ", i + 1);
        fgets(nomes1[i], sizeof(nomes1[i]), stdin);
        nomes1[i][strcspn(nomes1[i], "\n")] = '\0';
        printf("Posição (G/L/Z/V/M/A): ");
        scanf(" %c", &posicoes1[i]);
        printf("Força do jogador: ");
        scanf("%d", &forcas1[i]);
        getchar();  // Limpa o buffer de entrada
    }

    // Entrada de dados para o Time 2
    printf("Nome do Time 2: ");
    fgets(time2, sizeof(time2), stdin);
    time2[strcspn(time2, "\n")] = '\0';

    for (int i = 0; i < NUM_JOGADORES; i++) {
        printf("Nome do jogador %d: ", i + 1);
        fgets(nomes2[i], sizeof(nomes2[i]), stdin);
        nomes2[i][strcspn(nomes2[i], "\n")] = '\0';
        printf("Posição (G/L/Z/V/M/A): ");
        scanf(" %c", &posicoes2[i]);
        printf("Força do jogador: ");
        scanf("%d", &forcas2[i]);
        getchar();  // Limpa o buffer de entrada
    }

    // Cálculo da força ponderada para o Time 1
    int forca_time1 = 0;
    for (int i = 0; i < NUM_JOGADORES; i++) {
        if (posicoes1[i] == 'G') {
            forca_time1 += 8 * forcas1[i];
        } else if (posicoes1[i] == 'L' || posicoes1[i] == 'Z' || posicoes1[i] == 'V') {
            forca_time1 += 10 * forcas1[i];
        } else if (posicoes1[i] == 'M') {
            forca_time1 += 11 * forcas1[i];
        } else if (posicoes1[i] == 'A') {
            forca_time1 += 12 * forcas1[i];
        }
    }

    // Cálculo da força ponderada para o Time 2
    int forca_time2 = 0;
    for (int i = 0; i < NUM_JOGADORES; i++) {
        if (posicoes2[i] == 'G') {
            forca_time2 += 8 * forcas2[i];
        } else if (posicoes2[i] == 'L' || posicoes2[i] == 'Z' || posicoes2[i] == 'V') {
            forca_time2 += 10 * forcas2[i];
        } else if (posicoes2[i] == 'M') {
            forca_time2 += 11 * forcas2[i];
        } else if (posicoes2[i] == 'A') {
            forca_time2 += 12 * forcas2[i];
        }
    }

    // Saída dos resultados
    printf("Força do Time 1 (%s): %d\n", time1, forca_time1);
    printf("Força do Time 2 (%s): %d\n", time2, forca_time2);

    if (forca_time1 > forca_time2) {
        printf("O Time 1 é mais forte!\n");
    } else if (forca_time1 < forca_time2) {
        printf("O Time 2 é mais forte!\n");
    } else {
        printf("Os times têm a mesma força!\n");
    }

    return 0;
}