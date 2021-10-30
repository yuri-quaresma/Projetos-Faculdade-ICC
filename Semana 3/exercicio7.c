#include <stdio.h>

int main(){
    int nota1, nota2, nota3, peso1 = 2, peso2 = 3, peso3 = 5;
    float mediaPond;
    printf("Digite as notas das 3 provas: ");
    scanf("%d%d%d", &nota1, &nota2, &nota3);
    mediaPond = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
    printf("A media do aluno e %.2f", mediaPond);
    return 0;
}
