#include <stdio.h>
#include <math.h>

float media(float n1, float n2, float n3, float n4){
    float media;
    media = (n1 + n2 + n3 + n4) / 4;
    return media;
}

float expressao(float x, float y, float w, float k){
    float resultado;
    resultado = pow(x, 3) + pow(y, 2) + media(x, y, w, k) + w / k;
    return resultado;
}

int main(){
    float x, y, w, k;
    printf("Digite 4 numeros reais: ");
    scanf("%f%f%f%f", &x, &y, &w, &k);
    printf("Resultado: %f", expressao(x, y, w, k));
    return 0;
}
