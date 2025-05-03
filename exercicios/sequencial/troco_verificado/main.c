/*Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia.
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto,
e o valor em dinheiro dado pelo cliente. Seu programa deve mostrar o valor do troco a ser devolvido
ao cliente. Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando o
valor restante conforme exemplo.
Exemplo 1:
Preço unitário do produto: 8.00
Quantidade comprada: 2
Dinheiro recebido: 20.00
TROCO = 4.00*/

#include <stdio.h>

void limpar_entrada() {
    char c;
    while((c = getchar()) != '\n' && c != EOF){}
}

int main() {
    
    double preco, dinheiro;
    int qtd;

    printf("Preço unitário do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &qtd);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);
    
    double troco;
    troco = dinheiro - (preco * qtd);

    if (troco < 0) {
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS", troco * -1);
    }
    else {
        printf("TROCO = %.2lf", troco);
    }

    limpar_entrada();
    getchar();
    return 0;
}