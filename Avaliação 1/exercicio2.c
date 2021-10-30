#include <stdio.h>

int main(){
    int tempoGasto, velocidadeMedia, distanciaPercorrida;
    float litrosUsados;


    printf("Digite o tempo gasto na viagem: ");
    scanf("%d", &tempoGasto);
    printf("Digite a velocidade media: ");
    scanf("%d", &velocidadeMedia);

    distanciaPercorrida = velocidadeMedia * tempoGasto;
    litrosUsados = distanciaPercorrida / 12;

    printf("Velocidade media: %d KM/h\n", velocidadeMedia);
    printf("Tempo gasto: %d horas\n", tempoGasto);
    printf("Distancia percorrida: %d KM\n", distanciaPercorrida);
    printf("Litros usados na viagem: %.2f\n", litrosUsados);
    return 0;
}
