//calculadora de sistemas de equações lineares por eliminação gausiana -> Linearsys

#include<stdio.h>
#include<stdlib.h>

int L = 3;
int C = 4;

float matriz[3][4];

void imprimeMatriz(){
    printf("\nImprimindo a matriz ...\n\n");
    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            printf("%02.1f  ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    float x = 0, y = 0, z = 0;

    printf("---- LINEARSYS ----\n\n");

    printf("Preencha a matriz expandida 3x4 que representa o sistema linear de 3 equacoes\n");

    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            printf("Elemento da posicao %d%d\n>>> ", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
    }

    imprimeMatriz();
    //verificando se o elemento a11 é 1
    if(matriz[0][0] != 1){
        int aux = matriz[0][0];
        for(int i = 0 ; i < C; i++){
            matriz[0][i] = matriz[0][i] / aux;
        }
    }

    imprimeMatriz();

    //zerando os elementos abaixo do elemento a11
    //elemento a21
    if(matriz[0][1] =! 0){
        float a = matriz[0][0];
        float b = matriz[1][0];
        for(int i = 0 ; i < C ; i++){
            matriz[1][i] = a * matriz[1][i] - b * matriz[0][i];
        }
    }

    imprimeMatriz();

    //elemento a31
    if(matriz[0][1] =! 0){
        float a = matriz[0][0];
        float b = matriz[2][0];
        for(int i = 0 ; i < C ; i++){
            matriz[2][i] = a * matriz[2][i] - b * matriz[0][i];
        }
    }

    imprimeMatriz();

    //verificando se o elemento a22 é 1
    if(matriz[1][1] != 1){
        int aux = matriz[1][1];
        for(int i = 1 ; i < C; i++){
            matriz[1][i] = matriz[1][i] / aux;
        }
    }

    imprimeMatriz();

    //verificando se o elemento a32 é 0
    if(matriz[2][1] != 0){
        float a = matriz[1][1];
        float b = matriz[2][1];
        for(int i = 1 ; i < C ; i++){
            matriz[2][i] = a * matriz[2][i] - b * matriz[1][i];
        }
    }

    imprimeMatriz();

    if((matriz[2][2] != 0) || (matriz[1][1] != 0 && matriz[1][2] != 0)){
        z = matriz[2][3] / matriz[2][2];
        y = matriz[1][3] - z;
        x = matriz[0][3] - z - y;

        printf("\nX = %.1f\nY = %.1f\nZ = %.1f\n", x, y, z);
    }else{
        printf("A solucao nao foi possivel por uma indeterminacao...\nAnalise a matriz apos os procedimentos de escalonamento triangular\n");
        imprimeMatriz();
    }

    return 0;
}