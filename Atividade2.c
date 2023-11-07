#include <stdio.h>
#include <string.h>

int main(){

    char t1[31], t2[31];
    char j1[11][31], j2[11][31];
    char p1[11], p2[11];

    double f1[11], f2[11];
    double ftime1 = 0;
    double ftime2 = 0;
    int i;



//entradas de valores para o primeiro time
    
    fgets(t1, sizeof(t1), stdin);
    t1[strcspn(t1, "\n")] = '\0';

    for(i = 0; i < 11; i++){
        
        fgets(j1[i], sizeof(j1[i]), stdin);
        j1[i][strcspn(j1[i], "\n")] = '\0';
        
        
        scanf("%s", &p1[i]);
//mudar forma de scan
        
        scanf("%lf", &f1[i]);

        getchar();
    }       

//entradas de valores para o segundo time
    
    fgets(t2, sizeof(t2), stdin);
    t2[strcspn(t2, "\n")] = '\0'; 
    
    for(i = 0; i < 11; i++){
        
        fgets(j2[i], sizeof(j2[i]), stdin);
        j2[i][strcspn(j2[i], "\n")] = '\0';
        
        
        scanf("%s", &p2[i]);

        
        scanf("%lf", &f2[i]);
        
        getchar();
        // DENTRO DO FOR DE CADA UM COLOCAR ISSO scanf("%40[^;];%c;%d", nomeJogador2[i], &posicao, &nivelForca);
        //SCANEAR ASSIM PARA O MARVIN LER CORRETAMENTE
    }   

    for(i = 0; i < 11; i++){
        if(p1[i] == 'G'){
            ftime1 += 8 * f1[i];

        }else if(p1[i] == 'L'){
            ftime1 += 10 * f1[i];

        }else if(p1[i] == 'Z'){
            ftime1 += 5 * f1[i];

        }else if(p1[i] == 'V'){
            ftime1 += 8 * f1[i];

        }else if(p1[i] == 'M'){
            ftime1 += 11 * f1[i];

        }else if(p1[i] == 'A'){
            ftime1 += 12 * f1[i];

        }
    }
    
    for(i = 0; i < 11; i++){
        if(p2[i] == 'G'){
            ftime2 += 8 * f2[i];

        }else if(p2[i] == 'L'){
            ftime2 += 10 * f2[i];

        }else if(p2[i] == 'Z'){
            ftime2 += 5 * f2[i];

        }else if(p2[i] == 'V'){
            ftime2 += 8 * f2[i];

        }else if(p2[i] == 'M'){
            ftime2 += 11 * f2[i];

        }else if(p2[i] == 'A'){
            ftime2 += 12 * f2[i];

        }
    }

    printf("%s: %.2f\n", f1, ftime1);  
    printf("%s: %.2f\n", f2, ftime2);
















    return 0;
}