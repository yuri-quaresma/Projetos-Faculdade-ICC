#include <stdio.h>

float media_pond(float n1, float n2, float n3){
    float media_pond;
    media_pond = (n1 * 1 + n2 * 2 + n3 * 3) / 1 + 2 + 3;
    return media_pond;
}

int main(){
    float n1, n2, n3;
    printf("Digite 3 numeros reais: ");
    scanf("%f%f%f", &n1, &n2, &n3);
    printf("Resultado: %f", media_pond(n1, n2, n3));
    return 0;
}
