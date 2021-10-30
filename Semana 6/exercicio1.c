#include <stdio.h>

int main(){
    float a, b;

    printf("Digite dois numeros reais: ");
    scanf("%f%f", &a, &b);

    if(a > b){
        printf("O maior numero e %f", a);
    }else{
        printf("O maior numero e %f", b);
    }

    return 0;
}
