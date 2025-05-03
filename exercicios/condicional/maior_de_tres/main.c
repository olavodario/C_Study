#include <stdio.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    
    int n1, n2, n3;
    
    printf("Primeiro numero: ");
    scanf("%d", &n1);
    printf("Segundo numero: ");
    scanf("%d", &n2);
    printf("Terceiro numero: ");
    scanf("%d", &n3);

    int maior;

    maior = n1;

    if (n2 > n1 && n2 > n3) {
        maior = n2;
    }
    else if (n3 > n2 && n3 > n1){
    maior = n3;
}
}