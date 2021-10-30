#include <stdio.h>

float percentual(int quantidade, int total){
    float perc;
    perc = ((float)quantidade / total) * 100;
    return perc;
}

int main(){
    int brancos, nulos, validos, total;
    float perc_brancos, perc_nulos, perc_validos;

    printf("Digite o numero total de eleitores: ");
    scanf("%d", &total);
    printf("Digite o total de votos brancos, nulos e validos: ");
    scanf("%d%d%d", &brancos, &nulos, &validos);

    perc_brancos = percentual(brancos, total);
    printf("Percentual de votos brancos: %.2f%%\n", perc_brancos);

    perc_nulos = percentual(nulos, total);
    printf("Percentual de votos nulos: %.2f%%\n", perc_nulos);

    perc_validos = percentual(validos, total);
    printf("Percentual de votos nulos: %.2f%%\n", perc_validos);

    return 0;
}
