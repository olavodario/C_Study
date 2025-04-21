#include <stdio.h>

int main () {
    int N, i, x, soma;

    printf("Quantos numeros serão digitados? ");
    scanf("%d", &N);

    soma = 0;
    for (i = 1; i <= N; i++) { //i++ -> i = i + 1
        printf("Digite um nuemro: ");
        scanf("%d", &x);

        soma = soma + x;
    }


    printf("SOMA = %d\n", soma);

    return 0;
}