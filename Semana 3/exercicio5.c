#include <stdio.h>

int main(){
    float salario, salarioReajustado;
    int percentReajuste;
    printf("Digite o valor do seu salario: ");
    scanf("%f", &salario);
    printf("Digite o percentual do reajuste: ");
    scanf("%d", &percentReajuste);
    salarioReajustado = salario + (salario * (percentReajuste * 0.01));
    printf("Salario: R$ %.2f\n", salario);
    printf("Percentual de reajuste: %d%%\n", percentReajuste);
    printf("O salario sera de R$ %.2f", salarioReajustado);
    return 0;
}
