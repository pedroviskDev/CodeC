//calculadora de sistemas de equações lineares -> Linearsys

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int x = 0;
    int y = 0;
    int z = 0;
    int L = 3, C = 4;
    float matriz[L][C];

    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            printf("LINEARSYS - Linear Systems Calculator\n");
            printf("Insira o %do coeficiente (ax+by+cz = d) da %da equacao\n>>> ", j+1, i+1);
            scanf("%f", &matriz[i][j]);
            getchar();
            system("clear");
        }
    }

    printf("Matriz expandida inserida com sucesso!\n");
    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            printf("%02.1f ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Pressione qualquer tecla para continuar\n");
    getchar();

    if(matriz[0][0] != 1){
        int aux = matriz[0][0];
        for(int i = 0 ; i < C ; i++){
            matriz[0][i] = matriz[0][i] / aux; 
        }
    }
    printf("Matriz expandida inserida com sucesso!\n");
    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            printf("%02.1f ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Pressione qualquer tecla para continuar\n");
    getchar();

    if(matriz[1][0] != 0){
        for(int i = 0 ; i < C ; i++){
            matriz[1][i] = matriz[1][i] * matriz[0][i] - matriz[1][i];
        }
    }
    printf("Matriz expandida inserida com sucesso!\n");
    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            printf("%02.1f ", matriz[i][j]);
        }
        printf("\n");
    }
     printf("Pressione qualquer tecla para continuar\n");
    getchar();

    if(matriz[2][0] != 0){
        for(int i = 0 ; i < C ; i++){
            matriz[2][i] = matriz[2][i] * matriz[0][i] - matriz[2][i];
        }
    }
    printf("Matriz expandida inserida com sucesso!\n");
    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            printf("%02.1f ", matriz[i][j]);
        }
        printf("\n");
    }
     printf("Pressione qualquer tecla para continuar\n");
    getchar();

    if(matriz[1][1] != 1){
        int aux = matriz[1][1];
        for(int i = 1 ; i < C ; i++){
            matriz[1][i] = matriz[1][i] / aux; 
        }
    }
    printf("Matriz expandida inserida com sucesso!\n");
    for(int i = 0 ; i < L ; i++){
        for(int j = 0 ; j < C ; j++){
            printf("%02.1f ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Pressione qualquer tecla para continuar\n");
    getchar();

    return 0;
}