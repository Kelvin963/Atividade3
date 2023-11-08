#include <stdio.h>
#include <string.h>

struct jogador {
    char j1[30];
    char p1;
    int f1;
};

int main() {
    struct jogador t1[11], t2[11];
    char j1Time1[30], j1Time2[30];

    scanf("%[^\n]", j1Time1);
    getchar();

    for (int i = 0; i < 11; i++) {
        scanf("%[^;];%c;%d", t1[i].j1, &t1[i].p1, &t1[i].f1);
        getchar(); 
    }

    scanf(" %[^\n]", j1Time2);
    getchar(); 

    for (int i = 0; i < 11; i++) {
        scanf("%[^;];%c;%d", t2[i].j1, &t2[i].p1, &t2[i].f1);
        getchar();
    }

    float ft1 = 8 * t1[0].f1 + 10 * (t1[1].f1 + t1[4].f1) +
                     5 * (t1[2].f1 + t1[3].f1) + 8 * (t1[5].f1 + t1[6].f1) +
                     11 * (t1[7].f1 + t1[8].f1) + 12 * (t1[9].f1 + t1[10].f1);

    float ft2 = 8 * t2[0].f1 + 10 * (t2[1].f1 + t2[4].f1) +
                     5 * (t2[2].f1 + t2[3].f1) + 8 * (t2[5].f1 + t2[6].f1) +
                     11 * (t2[7].f1 + t2[8].f1) + 12 * (t2[9].f1 + t2[10].f1);

    float f1n = ft1 / 100.0;
    float f2n = ft2 / 100.0;

    printf("%s: %.2f de f1\n", j1Time1, f1n);
    printf("%s: %.2f de f1\n", j1Time2, f2n);

    if (ft1 > ft2) {
        printf("%s eh mais forte\n", j1Time1);
    } else if (ft2 > ft1) {
        printf("%s eh mais forte\n", j1Time2);
    }

    return 0;
}