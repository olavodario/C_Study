/*Problema "glicose"
Fazer um programa para ler a quantidade de glicose
no sangue de uma pessoa e depois mostrar na tela a
classificação desta glicose de acordo com a tabela de
referência ao lado.
Classificação Glicose
Normal: Até 100 mg/dl
Elevado:
Maior que 100 até
140 mg/dl
Diabetes: Maior de 140 mg/dl

Exemplo 1:
Digite a medida da glicose: 90.0
Classificacao: normal*/

#include <stdio.h>

void limpar_entrada() {
    char c;
    while((c = getchar()) != '\n' && c != EOF){}
}

int main() {
    double glicose;

    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);

    if (glicose <= 100) {
        printf("Classificação: normal");
    }
    else if (glicose <= 140)
    {
        printf("Classificação: elevado");
    }

    else {
        printf("Classificação: diabetes");
    }
    
    limpar_entrada();
    getchar();
    return 0;
    
}