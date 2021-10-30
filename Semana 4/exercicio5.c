#include <stdio.h>

void converte_segundos(int segundos){
    int h, m, s, resto;
    h = segundos / 3600;
    resto = segundos % 3600;
    m = resto / 60;
    s = resto % 60;
    printf("%d horas, %d minutos e %d segundos.", h, m , s);
}

int main(){
    int segundos;
    printf("Digite o total de segundos: ");
    scanf("%d", &segundos);
    converte_segundos(segundos);
    return 0;
}
