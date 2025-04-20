#include <stdio.h>
#include <string.h>

int main(){
    
    // primeiro eu atribuo a tipagem dps o valor

    int idade;
    double salario, altura;
    char genero;
    char nome[50];//Para imprimir um texto precisamos criar um vetor d caracteres!
    
    idade = 20;
    salario = 5800.50;
    altura = 1.63;
    genero = 'F';
    strcpy(nome, "Maria Silva");

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %2.lf\n", salario);
    printf("ALTURA = %2.lf\n", altura);
    printf("GENERO = %c\n", genero);
    printf("NOME = %s\n", nome);

    return 0;
}
