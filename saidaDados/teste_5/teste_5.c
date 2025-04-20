#include <stdio.h>

int main(){
    
    double a, resultado;
    int b, c, d;

    a = 2.6234;
    b = a; // em C ele ignora tudo depois da virgula e atribuo somente o valor inteiro!

    c = 5;
    d = 2;
    resultado = (double) c / d; //nesse caso tenho que fazer o casting para double, pois se nao o compilador entende que quero uma divisao inteira das variaveis

    printf ("%d\n", b);
    printf ("%lf\n", resultado);

    return 0;
}