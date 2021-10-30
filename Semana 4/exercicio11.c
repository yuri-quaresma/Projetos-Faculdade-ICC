#include <stdio.h>

float pot_quadrado(float n){
    float quadrado;
    quadrado = n * n;
    return quadrado;
}

float pot_cubo(float n){
    float cubo;
    cubo = n * n * n;
    return cubo;
}

float media(float n1, float n2, float n3, float n4){
    float media;
    media = (n1 + n2 + n3 + n4) / 4;
    return media;
}

float expressao(float x, float y, float w, float k){
    float resultado;
    resultado = pot_cubo(x) + pot_quadrado(y) + media(x, y, w, k) + w / k;
    return resultado;
}

int main(){
    float x, y, w, k;
    printf("Digite 4 numeros reais: ");
    scanf("%f%f%f%f", &x, &y, &w, &k);
    printf("Resultado: %f", expressao(x, y, w, k));
    return 0;
}
