/*a) a área do quadrado que tem lado A
b) a área do triângulo retângulo que base A e altura B
c) a área do trapézio que tem bases A e B, e altura C*/

#include <stdio.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    double A, B, C;
    
    printf("Digite a medida A: ");
    scanf("%lf", &A);
    printf("Digite a medida B: ");
    scanf("%lf", &B);
    printf("Digite a medida C: ");
    scanf("%lf", &C);

    //calculo da area quadrada de A

    double areaA;
    areaA = A * A;
    printf("AREA DO QUADRADO = %.4lf\n", areaA);

    double areaB;
    areaB = A * B / 2;
    printf("AREA DO TRIANGULO = %.4lf\n", areaB);

    double areaC;
    areaC = (A + B)*C / 2;
    printf("AREA DO TRAPEZIO = %.4lf\n", areaC);

    limpar_entrada();
    getchar();
    return 0;
}