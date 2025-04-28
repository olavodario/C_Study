//Se Δ < 0, a equação não tem raízes reais (tem duas raízes complexas conjugadas)
#include <stdio.h>
#include <math.h>

void finalizar_programa() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
    getchar();
}

int main() {

    double  a, b, c;

    printf("Coeficiente a: ");
    scanf("%lf", &a);
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);

    //Baskara = Ela é expressa como: x = (-b ± √(b² - 4ac)) / 2a.
    double delta;

    //Se Δ < 0, a equação não tem raízes reais (tem duas raízes complexas conjugadas)
    delta = pow(b,2) - 4 * a * c;

    if (delta < 0) {
        printf("Esta equação nao possui raizes reais!");
    }

    else {
        double x1, x2;
        x1 = -(b) + sqrt(delta) / 2 * a;
        x2 = -(b) - sqrt(delta) / 2 * a;
        printf("X1 = %.4lf\n", x1);
        printf("X2 = %.4lf\n", x2);
    }

    finalizar_programa();
    return 0;
}

