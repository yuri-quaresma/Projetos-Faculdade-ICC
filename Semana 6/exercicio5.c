#include <stdio.h>

int main(){
    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    if(n > 0){
        printf("O numero e positivo.");
    }
    else if(n < 0){
        printf("O numero e negativo");
    }
    else if(n == 0){
        printf("O numero e zero");
    }
    return 0;
}
