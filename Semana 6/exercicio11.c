#include <stdio.h>

int main(){
    int opcao;
    float salario, imposto, aumento, novoSalario;

    printf("Menu de opcoes: \n");
    printf("  1 - Imposto\n");
    printf("  2 - Novo salario\n");
    printf("  Digite a opcao desejada\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Digite o seu salario: ");
            scanf("%f", &salario);

            if(salario < 500.00){
                imposto = salario * 0.05;
                printf("Imposto: R$ %.2f", imposto);
            }
            else if(salario >= 500.00 && salario <= 850.00){
                imposto = salario * 0.10;
                printf("Imposto: R$ %.2f", imposto);
            }
            else if(salario > 850.00){
                imposto = salario * 0.15;
                printf("Imposto: R$ %.2f", imposto);
            }
            break;

        case 2:
            printf("Digite o seu salario: ");
            scanf("%f", &salario);

            if(salario > 1500.00){
                novoSalario = salario + 25.00;
                printf("Novo salario: R$ %.2f", novoSalario);
            }
            else if(salario >= 750.00 && salario <= 1500.00){
                novoSalario = salario + 50.00;
                printf("Novo salario: R$ %.2f", novoSalario);
            }
            else if(salario >= 450.00 && salario < 750.00){
                novoSalario = salario + 75.00;
                printf("Novo salario: R$ %.2f", novoSalario);
            }
            else if(salario < 450.00){
                novoSalario = salario + 100.00;
                printf("Novo salario: R$ %.2f", novoSalario);
            }
            break;

        default:
            printf("Opcao invalida");
    }
    return 0;
}
