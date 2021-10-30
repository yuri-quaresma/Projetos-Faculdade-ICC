#include <stdio.h>

int converteGramas(float pesoKg){
    int pesoGramas;
    pesoGramas = pesoKg * 1000;
    return pesoGramas;
}

float calculaPrecoTotal(int pesoGramas, int codProd){
    float precoTotal;
    if(codProd >= 1 && codProd <= 4){
        precoTotal = pesoGramas * 10;
    }
    else if(codProd >= 5 && codProd <= 7){
        precoTotal = pesoGramas * 25;
    }
    else if(codProd >= 8 && codProd <= 10){
        precoTotal = pesoGramas * 35;
    }
    else{
        printf("Codigo de produto inválido\n");
    }
    return precoTotal;
}

float calculaImposto(float precoTotal, int codPais){
    float imposto;
    switch(codPais){
        case 1:
            imposto = precoTotal * 0;
            break;
        case 2:
            imposto = precoTotal * 0.15;
            break;
        case 3:
            imposto = precoTotal * 0.25;
            break;
    }
    return imposto;
}

float calculaValorTotal(float precoTotal, float valorImposto){
    float total;
    total = precoTotal + valorImposto;
    return total;
}

int main(){
        int codProd, codPais, pesoGramas;
        float pesoKg, precoTotal, valorImposto, valorTotal;

        printf("Digite o codigo do produto comprado: ");
        scanf("%d", &codProd);
        printf("Digite o peso do produto em quilos: ");
        scanf("%f", &pesoKg);
        printf("Digite o codigo do pais de origem: ");
        scanf("%d", &codPais);

        pesoGramas = converteGramas(pesoKg);
        precoTotal = calculaPrecoTotal(pesoGramas, codProd);
        valorImposto = calculaImposto(precoTotal, codPais);
        valorTotal = calculaValorTotal(precoTotal, valorImposto);

        printf("Peso em gramas: %d g\n", pesoGramas);
        printf("Preco total do produto comprado: %.2f\n", precoTotal);
        printf("Valor do imposto: %.2f\n", valorImposto);
        printf("Valor total do produto: %.2f\n", valorTotal);
    return 0;
}
