#include <stdio.h>

int main(){
    int a, b, c;

    printf("Digite 3 numeros inteiros: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a <= b && b <= c){
      printf("A ordem crescente: %d %d %d\n", a, b, c);
    }
    else if(a <= c && c <= b){
      printf("A ordem crescente: %d %d %d\n", a, c, b);
    }
    else if(b <= a && a <= c){
      printf("A ordem crescente: %d %d %d\n", b, a, c);
    }
    else if(b <= c && c <= a){
      printf("A ordem crescente: %d %d %d\n", b, c, a);
    }
    else if(c <= a && a <= b) {
      printf("A ordem crescente: %d %d %d\n", c, a, b);
    }
    else if(c <= b && b < a){
      printf("A ordem crescente: %d %d %d\n", c, b, a);
    }
    return 0;
}
