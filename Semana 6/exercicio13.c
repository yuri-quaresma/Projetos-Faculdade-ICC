#include <stdio.h>

float calculaPrecoUnitario(int codProd){
    float preco;
    if(codProd >= 1 && codProd <= 10){
        preco = 10.00;
    }
    else if(codProd >= 11 && codProd <= 20){
        preco = 15.00;
    }
    else if(codProd >= 21 && codProd <= 30){
        preco = 20.00;
    }
    else if(codProd >= 31 && codProd <= 40){
        preco = 30.00;
    }
    else{
        printf("Codigo de produto invalido\n");
    }
    return preco;
}

float calculaPrecoNota(int quantComprada, float precoUnitario){
    float preco;
    preco = quantComprada * precoUnitario;
    return preco;
}

float calculaDesconto(float precoNota){
    float desconto;
    if(precoNota < 250.00){
        desconto = precoNota * 0.05;
    }
    else if(precoNota >= 250.00 && precoNota <= 500.00){
        desconto = precoNota * 0.10;
    }
    else if(precoNota > 500.00){
        desconto = precoNota * 0.15;
    }
    return desconto;
}

float calculaPrecoFinal(float precoNota, float desconto){
    float preco;
    preco = precoNota - desconto;
    return preco;
}

int main(){
    int codProd, quantComprada;
    float precoUnitario, precoNota, desconto, precoFinal;

    printf("Digite o codigo do produto comprado: ");
    scanf("%d", &codProd);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantComprada);

    precoUnitario = calculaPrecoUnitario(codProd);
    precoNota = calculaPrecoNota(quantComprada, precoUnitario);
    desconto = calculaDesconto(precoNota);
    precoFinal = calculaPrecoFinal(precoNota, desconto);

    printf("Preco unitario do produto: R$ %.2f\n", precoUnitario);
    printf("Preco da nota: R$ %.2f\n", precoNota);
    printf("Desconto:  R$ %.2f\n", desconto);
    printf("Preco final: R$ %.2f\n", precoFinal);

    return 0;
}
