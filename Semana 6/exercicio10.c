#include <stdio.h>

void reajuste(float salario, char codigo){
    float aumento, novoSalario;

    switch(codigo){
        case '1':
            aumento = salario * 0.50;
            novoSalario = salario + aumento;
            printf("Cargo: Professor\n");
            printf("Valor do aumento: R$ %.2f\n", aumento);
            printf("Novo salario: %.2f", novoSalario);
            break;

        case '2':
            aumento = salario * 0.35;
            novoSalario = salario + aumento;
            printf("Cargo: Secretario\n");
            printf("Valor do aumento: R$ %.2f\n", aumento);
            printf("Novo salario: %.2f", novoSalario);
            break;

        case '3':
            aumento = salario * 0.20;
            novoSalario = salario + aumento;
            printf("Cargo: Programador\n");
            printf("Valor do aumento: R$ %.2f\n", aumento);
            printf("Novo salario: %.2f", novoSalario);
            break;

        case '4':
            aumento = salario * 0.10;
            novoSalario = salario + aumento;
            printf("Cargo: Analista de Sistemas\n");
            printf("Valor do aumento: R$ %.2f\n", aumento);
            printf("Novo salario: %.2f", novoSalario);
            break;

        case '5':
            printf("Cargo: Gerente\n");
            printf("Valor do aumento: Nao tem aumento\n");
            printf("Salario atual: %.2f", salario);
            break;

        default:
            printf("Cargo invalido");
    }
}

int main(){
    float salario;
    char codigo;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    printf("Digite o codigo do seu cargo: ");
    scanf("\n%c", &codigo);

    reajuste(salario, codigo);
    return 0;
}
