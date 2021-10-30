#include <stdio.h>

float soma(float n1, float n2, float n3){
    float soma;
    soma = n1 + n2 + n3;
    return soma;
}

int main(){
    float n1, n2, n3;
    printf("Digite 3 numeros: ");
    scanf("%f%f%f", &n1, &n2, &n3);
    printf("Resultado: %.2f", soma(n1, n2, n3));
    return 0;
}
