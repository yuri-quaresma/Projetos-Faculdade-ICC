#include <stdio.h>

int main(){
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d%d", &a, &b);
    printf("O resultado e %d", a%b);
    return 0;
}
