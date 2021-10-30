#include <stdio.h>
#include <math.h>

float expressao(float x, float w, float k, int y){
    float resultado;
    resultado = pow(x, 3) + pow(y, 2) + w / k;
    return resultado;
}

int main(){
    float x, w, k;
    int y;
    printf("Digite os valores de x, w, k (tipo real) e y (tipo inteiro): ");
    scanf("%f%f%f%d", &x, &w, &k, &y);
    printf("Resultado: %f", expressao(x, w, k, y));
    return 0;
}
