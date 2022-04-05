#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

int soma(float a, float b){
    float soma;
    soma = a + b;
    return soma;
}

int diferenca(float a, float b){
    float diferenca;
    diferenca = a - b;
    return diferenca;
}

float produto(float a, float b){
    float produto;
    produto = a *  b;
    return produto;
}

float razao(float a, float b){
    float razao;
    razao = a / b;
    return razao;
}

int menu(void){
    int op;
    printf("Que tipo de operacao voce deseja realizar?\n");
    printf("1 - soma\n2 - diferenca\n3 - produto\n4 - divisao\n5 - sair\n>");
    scanf("%d",&op);
    switch(op){
        case 1:
        printf("SOMA\n");
        break;
        
        case 2:
        printf("DIFERENCA\n");
        break;

        case 3:
        printf("PRODUTO\n");
        break;

        case 4:
        printf("DIVISAO\n");
        break;

        case 5:
        printf("SAINDO\n");
        break;
    }
    return op;
}

float leitor(float variavel){
    printf(">");
    scanf("%f",&variavel);
    return variavel;
}

int op;
float a, b, resultado;

int main(void){
    op = menu();
    while(op != 5){
        switch (op){
            case 1:
                a = leitor(a);
                b = leitor(b);
                resultado = soma(a,b);
                printf("%.2f + %.2f = %.2f\n", a, b, resultado);
                printf("Pressione qualquer tecla para continuar\n>");
                getch();
                system("cls");
                break;

            case 2:
                a = leitor(a);
                b = leitor(b);
                resultado = diferenca(a,b);
                printf("%.2f - %.2f = %.2f\n", a, b, resultado);
                printf("Pressione qualquer tecla para continuar\n>");
                getch();
                system("cls");
                break;

            case 3:
                a = leitor(a);
                b = leitor(b);
                resultado = produto(a,b);
                printf("%.2f x %.2f = %.2f\n", a, b, resultado);
                printf("Pressione qualquer tecla para continuar\n>");
                getch();
                system("cls");
                break;

            case 4:
                a = leitor(a);
                b = leitor(b);
                if (b == 0){
                    printf("Nao existe divisao por zero!\n");
                    printf("Pressione qualquer tecla para continuar\n>");
                    getch();
                    system("cls");
                    break;
                }
                resultado = razao(a,b);
                printf("%.2f / %.2f = %.2f\n", a, b, resultado);
                printf("Pressione qualquer tecla para continuar\n>");
                getch();
                system("cls");
                break;

            default:
                printf("Opcao invalida!\n");
                printf("Pressione qualquer tecla para continuar\n>");
                getch();
                system("cls");
                break;
        }
        op = menu();
    }
    system("pause");
    return 0;
}
