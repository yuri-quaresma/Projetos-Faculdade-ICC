#include <stdio.h>

void faturamentoAnual(int quantidadeFitas, float valorAluguel){
    float fatMensal, fatAnual;
    fatMensal = (quantidadeFitas / 3) * valorAluguel;
    fatAnual = fatMensal * 12;
    printf("Faturamento anual da locadora: R$ %.2f\n", fatAnual);
}

void ganhoMultas(int quantidadeFitas, float valorAluguel){
    float multas;
    multas = (quantidadeFitas / 10) * (valorAluguel * 0.10);
    printf("Ganho com multas por mes: R$ %.2f\n", multas);
}

void quantFitasFimDoAno(int quantidadeFitas, float valorAluguel){
    int fitasEstragadas, fitasCompadas, fitasFimDoAno;
    fitasEstragadas = quantidadeFitas * 0.02;
    fitasCompadas = quantidadeFitas / 10;
    fitasFimDoAno = quantidadeFitas - fitasEstragadas - fitasCompadas;
    printf("Quantidade de fitas que a locadora tera no fim do ano: %d fitas\n", fitasFimDoAno);
}

int main(){
    int quantidadeFitas;
    float valorAluguel;

    printf("Digite a quantidade de fitas na locadora: ");
    scanf("%d", &quantidadeFitas);
    printf("Digite o valor por cada aluguel: ");
    scanf("%f", &valorAluguel);

    faturamentoAnual(quantidadeFitas, valorAluguel);
    ganhoMultas(quantidadeFitas, valorAluguel);
    quantFitasFimDoAno(quantidadeFitas, valorAluguel);
    return 0;
}
