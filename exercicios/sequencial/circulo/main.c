#include <stdio.h>
#include <math.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    
    double raio;
    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);

    double area;

    area = 3.141592653 * pow(raio, 2);
    printf("AREA = %.3lf\n", area);

    limpar_entrada();
    getchar();

    return 0;
}