#include <stdio.h>

void qual_preco(){
    float preco;
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("O preco e R$ %.2f", preco);
}
int main(){
    qual_preco();
    return 0;
}
