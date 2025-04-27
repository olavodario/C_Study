#include <stdio.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    double nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    double notaFinal;
    notaFinal = nota1 + nota2;
    printf("NOTA FINAL = %.1lf\n", notaFinal);

    if (notaFinal < 60.0) {
        printf("REPROVADO");
    }
    
    limpar_entrada();
    getchar();
    return 0;
}