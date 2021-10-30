#include <stdio.h>

void quadrado(int n){
    printf("%d %d %d %d\n", n, n, n, n);
    printf("%d %d %d %d\n", n, n, n, n);
    printf("%d %d %d %d\n", n, n, n, n);
    printf("%d %d %d %d\n", n, n, n, n);
}
int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    quadrado(n);
    return 0;
}
