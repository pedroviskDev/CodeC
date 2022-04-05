#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

float a, b, c, delta, x1, x2;
int op;

int main(void){
    printf("Pressione 1 para calcular as raizes de uma equacao de 2o grau ou 2 para sair\n> ");
    scanf("%d",&op);
    system("cls");
    while(1){
        if (op == 2){
            printf("SAINDO\n");
            getch();
            system("cls");
            break;
        }
        printf("informe um valor para o coeficiente a\n> ");
        scanf("%f",&a);
        system("cls");

        printf("informe um valor para o coeficiente b\n> ");
        scanf("%f",&b);
        system("cls");
            
        printf("informe um valor para o coeficiente c\n> ");
        scanf("%f",&c);
        system("cls");

        delta = pow(b,2)-4*a*c;
        if (delta > 0){
            x1 = (-b+sqrt(delta))/2*a;
            x2 = (-b-sqrt(delta))/2*a;
            printf("A equacao possui duas raizes reais x1 = %.2f e x2 = %.2f\n", x1, x2);
            
            getch();
            system("cls");

        }else if (delta == 0){
            x1 = -b/2*a;
            printf("A equacao possui uma unica raiz real x = %.2f\n",x1);

            getch();
            system("cls");

        }else{
            printf("A equacao nao tem solucao no conjunto dos numeros reais.\n");

            getch();
            system("cls");

        }
        printf("Pressione 1 para calcular as raizes de uma equacao de 2o grau ou 2 para sair\n> ");
        scanf("%d",&op);
    }
    return 0;
    system("pause");
}