#include <stdio.h>

int main() {

    double largura, comprimento, metroQ;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &metroQ);

    double area, preco;

    area = largura * comprimento;
    printf("Area do terreno = %.2lf\n", area);

    preco = area * metroQ;
    printf("Preco do terreno = %.2lf\n", preco);
    return 0;
}