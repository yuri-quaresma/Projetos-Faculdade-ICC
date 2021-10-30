#include <stdio.h>

int main(){
    int a, b ,c;

    printf("Digite 3 numeros inteiros: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a <= b && a <= c){
        printf("O menor e %d", a);
    }
    else if(b <= a && b <= c){
       printf("O menor e %d", b);
    }
    else{
       printf("O menor e %d", c);
    }
    return 0;
}
