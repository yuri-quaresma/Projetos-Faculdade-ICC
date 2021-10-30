#include <stdio.h>

int main(){
    int n;

    printf("Digite um numero entre 1 a 5: ");
    scanf("%d", &n);

    if(n == 1){
        printf("Um");
    }
    else if(n == 2){
        printf("Dois");
    }
    else if(n == 3){
        printf("Tres");
    }
    else if(n == 4){
        printf("Quatro");
    }
    else if(n == 5){
        printf("Cinco");
    }
    return 0;
}
