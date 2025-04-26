#include <stdio.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    int x, y;

    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    int soma;

    soma = x + y;
    printf("SOMA = %d\n", soma);

    limpar_entrada();
    getchar();

    return 0;   
}