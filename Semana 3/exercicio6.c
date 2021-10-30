#include <stdio.h>

int main(){
    int votosTotal, votosBrancos, votosNulos, votosValidos;
    float percentBrancos, percentNulos, percentValidos;
    printf("Digite o total de votos validos: ");
    scanf("%d", &votosValidos);
    printf("Digite o total de votos brancos: ");
    scanf("%d", &votosBrancos);
    printf("Digite o total de votos nulos: ");
    scanf("%d", &votosNulos);
    votosTotal = votosValidos + votosBrancos + votosNulos;
    percentBrancos = votosBrancos * 100 / votosTotal;
    percentNulos = votosNulos * 100 / votosTotal;
    percentValidos = votosValidos * 100 / votosTotal;
    printf("Votos Validos: %d | Percentual: %.2f%%\n", votosValidos, percentValidos);
    printf("Votos Brancos: %d | Percentual: %.2f%%\n", votosBrancos, percentBrancos);
    printf("Votos Nulos: %d | Percentual: %.2f%%\n", votosNulos, percentNulos);
    printf("Total de votos: %d | Percentual: %d%%\n", votosTotal, 100);
    return 0;
}
