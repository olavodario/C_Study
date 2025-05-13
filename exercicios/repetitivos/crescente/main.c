#include <stdio.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    int x, y;

    printf("Digite dois numeros: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    while (x != y){
        if (x > y) {
            printf("DECRESENTE!\n");
        }
        else if (y > x)
        {
            printf("CRESCENTE!\n");
        }

        printf("Digite dois numeros: \n");
        scanf("%d", &x);
        scanf("%d", &y);
    }


    printf("FIM DO PROGRAMA!\n");
    limpar_entrada();
    getchar();
    return 0;
}