#include <stdio.h>

void triangulo(char c){
    printf("   %c\n", c);
    printf("  %c %c\n", c, c);
    printf(" %c %c %c\n", c, c, c);
    printf("%c %c %c %c\n",c ,c ,c ,c);
}

int main(){
    char c;
    printf("Insira um digito: ");
    scanf("%c/n", &c);
    triangulo(c);
    return 0;
}
