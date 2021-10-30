#include <stdio.h>

int main(){
    int numPrest, quantPrestPagas;
    float valorPrest, totalPago, saldoDevedor;

    printf("Digite o numero de prestacoes: ");
    scanf("%d", &numPrest);
    printf("Digite a quantidade de prestacoes pagas: ");
    scanf("%d", &quantPrestPagas);
    printf("Digite o valor da prestacao: ");
    scanf("%f", &valorPrest);

    totalPago = valorPrest * quantPrestPagas;
    printf("Total pago: R$ %.2f\n", totalPago);
    saldoDevedor = (numPrest * valorPrest) - totalPago;
    printf("Saldo devedor: R$ %.2f", saldoDevedor);
    return 0;
}
