#include <stdio.h>

int main(){
    int horasTrab, horasExtras;
    float salarioMinimo, valorHTrab, valorHExt, salarioBruto, quantiaExtra, salarioAReceber;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &horasTrab);
    printf("Digite o numero de horas extras: ");
    scanf("%d", &horasExtras);

    valorHTrab = salarioMinimo / 8;
    valorHExt = salarioMinimo / 4;
    salarioBruto = horasTrab * valorHTrab;
    quantiaExtra = horasExtras * valorHExt;
    salarioAReceber = salarioBruto + quantiaExtra;

    printf("Valor da hora trabalhada: R$ %.2f\n", valorHTrab);
    printf("Valor da hora extra: R$ %.2f\n", valorHExt);
    printf("Valor do salario bruto: R$ %.2f\n", salarioBruto);
    printf("Quantia extra: R$ %.2f\n", quantiaExtra);
    printf("Salario a receber: R$ %.2f\n", salarioAReceber);
    return 0;
}
