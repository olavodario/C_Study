#include <stdio.h>

int main() {
    int N, i;

    printf ("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N]; //os vetores de C e suas derivadas (Java, C#, C++) sempre iniciam o vetor com 0!

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nNumeros digitados:\n");

    for (i = 0; i < N; i++) {
        printf("%.1lf\n", vet[i]);
    }
    return 0;
}
