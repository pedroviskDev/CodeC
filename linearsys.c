#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int op, m, n, num;


int menu(){
    int op;
    printf("LINEARSYS - Calculadora de sistemas lineares\n");
    printf("1 - ENTRADA DE DADOS\n2 - SAIR\n> ");
    scanf("%d",&op);
    return op;
}




int main(void){

    setlocale(LC_ALL,"Portuguese");
    
    op = menu();
    while(op!=2){
        switch(op){
        case 1:{
            printf("Quantas equações compõem o sistema?\n> ");
            scanf("%d",&n);
            printf("Quantas incógnitas as equações possuem?\n> ");
            scanf("%d",&m);
            int matriz[n][m];
            for (int i=0;i<n;i++){
                for (int j=0;j<m;j++){
                    printf("Informe o elemento da posição a%d%d\n> ",i+1,j+1);
                    scanf("%d",&matriz[i][j]);
                    system("cls");
                }
            }
            break;
        }
            
        case 2:
            printf("SAINDO!\n");
        
        default:
            printf("OPÇÃO INVÁLIDA!\n");
            break;
        }
    }
    return 0;
    system("pause");
}