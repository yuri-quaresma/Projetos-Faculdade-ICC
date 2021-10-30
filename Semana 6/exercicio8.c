#include <stdio.h>

int main(){
    float salario, aumento;
    char categoria;

    printf("Digite o valor do seu salario: ");
    scanf("%f", &salario);
    printf("Digite a letra da sua categoria: ");
    scanf("\n%c", &categoria);

    switch(categoria){
        case 'm':
            aumento = salario * 0.10;
            printf("O salario reajustado e R$ %.2f", salario + aumento);
            break;

        case 'h':
            aumento = salario * 0.20;
            printf("O salario reajustado e R$ %.2f", salario + aumento);
            break;

        default:
            printf("Categoria invalida");
            return -1;
    }
    return 0;
}
