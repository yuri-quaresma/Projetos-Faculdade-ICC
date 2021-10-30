#include <stdio.h>

int main(){
    int quantAnos, quantCigarros;
    float precoCarteira, precoCigarro, custoDia, custoNAnos, dinheiroGasto;

    printf("Digite a quantidade de cigarros fumados por dia: ");
    scanf("%d", &quantCigarros);
    printf("Digite ha quantos anos voce fuma: ");
    scanf("%d", &quantAnos);
    printf("Digite o preco da carteira de cigarro: ");
    scanf("%f", &precoCarteira);

    precoCigarro = precoCarteira / 20;
    custoDia = precoCigarro * quantCigarros;
    custoNAnos = custoDia * (quantAnos * 365);

    printf("Gasto: R$ %.2f", custoNAnos);

    return 0;
}
