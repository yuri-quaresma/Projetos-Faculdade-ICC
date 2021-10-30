#include <stdio.h>

int main(){
    int dias;
    float precoDia = 80.00, valorSemImposto, valorPago;
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);
    valorSemImposto = precoDia * dias;
    valorPago = valorSemImposto - (valorSemImposto * 0.08);
    printf("O valor a ser pago e R$ %.2f", valorPago);
    return 0;
}
