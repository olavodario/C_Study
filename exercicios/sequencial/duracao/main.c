#include <stdio.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    int h, min, seg;
    int tempo;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &tempo);
    h = tempo / 3600;
    tempo = tempo - (h * 3600);
    min = tempo / 60;
    tempo = tempo - (min * 60);
    seg = tempo;

    printf("%d:%d:%d", h, min, seg);
    limpar_entrada();
    getchar();

    return 0;
}