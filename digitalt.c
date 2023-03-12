#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
    char alfabeto[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int i = 0; 
    char letra;
    int flag = 1;
    int op = 1;


    while(op){
         while (flag) { 
            printf("Digite as 27 letras do alfabeto: ");
            
            letra = getch();

            if(letra == '1'){
                flag = 0;
            }
            
        
            if (letra != alfabeto[i]) {
                system("cls");
                printf("A sequencia esta errada.\n");
                printf("Voce digitou >>> %c.\n", letra);
                i = 0;
                continue; 
            } else {
                system("cls");
                printf("Voce digitou >>> %c.\n", letra);
                i++;

                if (i == 26){
                    flag = 0;
                }
            }

        }
        
        printf("Mais uma vez? (1 - sim // 2 - nao)\n>>> ");
        char opcao = getch();
        if (opcao == '1'){
            op = 1;
            flag = 1;
            system("cls");
        } else if (opcao == '2'){
            op = 0;
        } else {
            printf("Valor invalido\n");
            continue;
        }
    }

    printf("FIM\n");


    return 0;
}
