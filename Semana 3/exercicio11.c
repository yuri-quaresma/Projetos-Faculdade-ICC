#include <stdio.h>

int main(){
    int pesoRacaoKG, pesoRacaoG, racaoGato1, racaoGato2, racao5Dias, racao15Dias;

    printf("Digite a quantidade de racao comprada(em kilos): ");
    scanf("%d", &pesoRacaoKG);
    printf("Digite a quantidade de racao dada para o gato 1 (em gramas): ");
    scanf("%d", &racaoGato1);
    printf("Digite a quantidade de racao dada para o gato 2 (em gramas): ");
    scanf("%d", &racaoGato2);

    pesoRacaoG = pesoRacaoKG * 1000;
    racao5Dias = pesoRacaoG - (racaoGato1 + racaoGato2) * 5;
    printf("Restante de racao em 5 dias: %d KG\n", racao5Dias/1000);
    racao15Dias = pesoRacaoG - (racaoGato1 + racaoGato2) * 15;
    printf("Restante de racao em 15 dias: %d KG\n", racao15Dias/1000);

    return 0;
}
