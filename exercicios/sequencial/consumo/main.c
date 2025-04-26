#include <stdio.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF){}
}

int main() {
    int dist;
    double combustivel;

    printf("Distancia percorrida: ");
    scanf("%d", &dist);
    printf("Combustível gasto: ");
    scanf("%lf", &combustivel);

    double consumo;
    consumo = dist / combustivel;
    printf("Consumo medio = %.3lf", consumo);

    limpar_entrada();
    getchar();
    return 0;
}