#include <stdio.h>

int main(){
    char a, b;

    printf("Digite dois caracteres: ");
    scanf("%c\n%c", &a, &b);

    if(a == b){
        printf("Igual");
    }else{
        printf("Diferente");
    }
    return 0;
}
