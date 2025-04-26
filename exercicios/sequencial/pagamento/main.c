#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer,int length){
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main() {
    char nome[50];
    double valorHora;
    int horasTrabalhadas;

    printf("Nome: ");
    ler_texto(nome, 50);
    printf("Valor por hora trabalhada: ");
    scanf("%lf", &valorHora);
    printf("Horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    double pagamento;
    pagamento = valorHora * horasTrabalhadas;
    printf("O pagamento para %s deve ser %.2lf", nome, pagamento);

    limpar_entrada();
    getchar();
    return 0;
}