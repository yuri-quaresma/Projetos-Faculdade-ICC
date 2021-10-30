#include <stdio.h>

int main(){
    int numApart;
    float valorDiaria, diariaPromo, valorArrec100, valorArrec70, prejPromo;

    printf("Digite o numero de apartamentos do hotel: ");
    scanf("%d", &numApart);
    printf("Digite o valor normal da diaria: ");
    scanf("%f", &valorDiaria);

    diariaPromo = valorDiaria - (valorDiaria * 0.25);
    printf("Valor da diaria promocional: R$ %.2f\n", diariaPromo);
    valorArrec100 = diariaPromo * numApart;
    printf("Valor arrecadado em 100%% de ocupacaoo: R$ %.2f\n", valorArrec100);
    valorArrec70 = valorArrec100 * 0.70;
    printf("Valor arrecadado em 70%% de ocupacaoo: R$ %.2f\n", valorArrec70);
    prejPromo = (valorDiaria * numApart) - valorArrec100;
    printf("Valor que o hotel perderá por causa da promocao: R$ %.2f", prejPromo);

    return 0;
}
