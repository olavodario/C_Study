#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    printf("Digite o nome: ");
    //limpar_entrada(); como é o primeiro n preciso limpar a entrada
    fgets(nome, 50, stdin);
    strtok (nome, "\n");//serve para nao adicionar o 'ENTER' no nome, fazendo ter uma quebra de linha indesejada!
    printf("Digite o valor da idade: ");
    scanf("%d", &idade); //o scanf trabalha com a referencia da variavel na memoria, por conta disso o '&', ele vai pegar esse endereço da memoria
    printf("Digite o valor do salario: ");
    scanf("%lf", &salario);
    printf("Digite o valor da altura(m): ");
    scanf("%lf", &altura);

    printf("Digit o genero (F/M): ");
    limpar_entrada(); 
    scanf("%c", &genero); 

    printf("A funcionaria %s, sexo %c, ganha R$%.2lf e tem %i anos de idade!\n", nome, genero, salario, idade);

    return 0;
}