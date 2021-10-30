#include <stdio.h>

float calculaCoeficienteSalario(char turno, float salario){
    float coeficiente;
    switch(turno){
        case 'M':
            coeficiente = salario * 0.10;
            break;
        case 'V':
            coeficiente = salario * 0.15;
            break;
        case 'N':
            coeficiente = salario * 0.12;
            break;
        default:
            printf("Categoria inválida!\n");
    }
    return coeficiente;
}

float calculaSalarioBruto(int horas, float coefSalario){
    float bruto;
    bruto = horas * coefSalario;
    return bruto;
}

float calculaImposto(char categoria, float bruto){
    float imposto;
    switch(categoria){
        case 'O':
            if(bruto >= 300.00){
                imposto = bruto * 0.05;
            }
            else if(bruto < 300.00){
                imposto = bruto * 0.03;
            }
            break;

        case 'G':
            if(bruto >= 400.00){
                imposto = bruto * 0.06;
            }
            else if(bruto < 400.00){
                imposto = bruto * 0.04;
            }
            break;

        default:
            printf("Categoria inválida!\n");
    }
    return imposto;
}

float verificaGratificacao(char turno, int horas){
    float gratificacao;
    if(turno == 'N' && horas > 80){
        gratificacao = 50.00;
    }
    else{
        gratificacao = 30.00;
    }
    return gratificacao;
}

float verificaAuxilioAlimentacao(char categoria, float coefSalario, float bruto){
    float auxilio;
    if(categoria == 'O' || coefSalario <= 25){
        auxilio = bruto / 3;
    }
    else{
        auxilio = bruto / 2;
    }
    return auxilio;
}

float calculaSalarioLiquido(float bruto, float imposto, float gratificacao, float auxilio){
    float salario;
    salario = bruto - imposto + gratificacao + auxilio;
    return salario;
}

int main(){
    int horasTrabalhadas;
    float salarioMinimo, coefSalario, salarioBruto, imposto, gratificacao, auxilioAlimentacao, salarioLiquido;
    char turno, categoria;

    printf("Digite o valor do seu salario minimo: ");
    scanf("%f", &salarioMinimo);
    printf("Digite o turno de trabalho: ");
    scanf("\n%c", &turno);
    printf("Digite a sua categoria: ");
    scanf("\n%c", &categoria);
    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%d", &horasTrabalhadas);

    coefSalario = calculaCoeficienteSalario(turno, salarioMinimo);
    salarioBruto = calculaSalarioBruto(horasTrabalhadas, coefSalario);
    imposto = calculaImposto(categoria, salarioBruto);
    gratificacao = verificaGratificacao(turno, horasTrabalhadas);
    auxilioAlimentacao = verificaAuxilioAlimentacao(categoria, coefSalario, salarioBruto);
    salarioLiquido = calculaSalarioLiquido(salarioBruto, imposto, gratificacao, auxilioAlimentacao);

    printf("Coeficiente do salario: R$ %.2f\n", coefSalario);
    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Auxilio alimentacao: R$ %.2f\n", auxilioAlimentacao);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
