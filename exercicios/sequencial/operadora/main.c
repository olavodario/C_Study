/*Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de
telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para
ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago.
Exemplo 1:
Digite a quantidade de minutos: 22
Valor a pagar: R$ 50.00*/

#include <stdio.h>

void limpar_entrada() {
    char c;
    while((c = getchar()) != '\n' && c != EOF){}
}

int main() {
    int minutos;
    double valor;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    valor = 50.00;

    if (minutos > 100) {
        valor = (minutos - 100) * 2 + valor;
    }

    printf("Valor a pagar: %.2lf", valor);

    limpar_entrada();
    getchar();
    return 0;
}