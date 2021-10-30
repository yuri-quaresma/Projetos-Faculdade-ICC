#include <stdio.h>

void qual_idade(){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Sua idade e %d anos", idade);
}

int main(){
    qual_idade();
    return 0;
}
