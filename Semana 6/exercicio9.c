#include <stdio.h>

int main(){
    float n1, n2, resposta;
    char op;

    printf("Digite 2 numeros: ");
    scanf("%f%f", &n1, &n2);
    printf("Digite a operacao que deseja realizar: ");
    scanf("\n%c", &op);

    switch(op){
        case '+':
            resposta = n1 + n2;
            printf("Resposta: %f", resposta);
            break;

        case '-':
            resposta = n1 - n2;
            printf("Resposta: %f", resposta);
            break;

        case '*':
            resposta = n1 * n2;
            printf("Resposta: %f", resposta);
            break;

        case '/':
            resposta = n1 / n2;
            printf("Resposta: %f", resposta);
            break;

        default:
            printf("Operacao invalida");
    }
    return 0;
}
