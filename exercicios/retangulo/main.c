#include <stdio.h>
#include <math.h>

int main() {

    double base, altura;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    double area, perimetro, diagonal;

    //h2 = b^2 + a^2

    area = base * altura;
    printf("AREA = %lf\n", area);
    perimetro = base * 2 + altura * 2;
    printf("PERIMETRO = %lf\n", perimetro);
    diagonal = sqrt(pow(base, 2) + pow(altura, 2));
    printf("DIAGONAL = %lf\n", diagonal);

    return 0;
} 