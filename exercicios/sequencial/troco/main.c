#include <stdio.h>

void limpar_entrada(){
    char c;
    while((c = getchar()) != '\n' && c != EOF){}
}

int main() {
    
    double preco, dinheiro;
    int qtd;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &qtd);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    double troco;
    troco = dinheiro - (preco * qtd);

    printf("TROCO = %.2lf", troco);
    limpar_entrada();
    getchar();
}