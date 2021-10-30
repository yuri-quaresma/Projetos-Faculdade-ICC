#include <stdio.h>

int main(){
    int carrosVendidos;
    float salarioFixo, valorVendas, valorPorCarroVendido, salarioFinal;

    printf("Digite o total de carros vendidos: ");
    scanf("%d", &carrosVendidos);
    printf("Digite o valor total de vendas: ");
    scanf("%f", &valorVendas);
    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite o valor que voce recebe por carro vendido: ");
    scanf("%f", &valorPorCarroVendido);

    salarioFinal = salarioFixo + (valorPorCarroVendido * carrosVendidos) + (valorVendas * 0.05);

    printf("Salario final:  R$ %.2f", salarioFinal);
    return 0;
}
