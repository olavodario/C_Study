#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main() {

    char nome1[50], nome2[50];
    double idade1, idade2;

    printf("Dados da primeira pessoa\n");
    printf("Nome: ");
    ler_texto(nome1, 50);
    printf("Idade: ");
    scanf("%lf", &idade1);

    printf("Dados da segunda pessoa\n");
    printf("Nome: ");
    limpar_entrada();
    ler_texto(nome2, 50);
    printf("Idade: ");
    scanf("%lf", &idade2);

    double mediaIdade;

    mediaIdade = (idade1 + idade2) / 2;

    printf("A idade media de %s e %s eh de %.1lf anos \n", nome1, nome2, mediaIdade);
    limpar_entrada();
    getchar();// Aguarda a entrada de um caractere (e Enter)
    return 0;
}