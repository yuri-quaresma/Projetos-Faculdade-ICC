#include <stdio.h>

float media(float n1, float n2, float n3, float n4){
    float media;
    media = (n1 + n2 + n3 + n4) / 4;
    return media;
}

int main(){
    float n1, n2, n3, n4;
    printf("Digite 4 numeros reais: ");
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    printf("Media: %.2f", media(n1, n2, n3, n4));
    return 0;
}
