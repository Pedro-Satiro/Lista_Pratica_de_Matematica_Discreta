#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int e_primo(int numero, int ultimo) {
    for (int contador = ultimo; contador <= sqrt(numero); contador++) {
        if (numero % contador == 0) {
            return 0;
        }
    }
    return 1;
}

int proximo_primo(int numero, int divisor, int ultimo) {
    for (int i = divisor+1; i <= sqrt(numero); i++) {
        if (e_primo(i, ultimo)) {
            return i;
        }
    }
    return numero;
}

void fator_primo(int numero, int divisor) {
    if (numero / divisor == 1) {
        printf("%d ", divisor);
    } else {
        printf("%d * ", divisor);
    }
}

int main() {
    int numero, divisor = 2, ultimo = 2;
    printf("digite um numero: ");
    scanf("%d", &numero);

    while (numero != 1) {
        if (numero % divisor == 0) {
            fator_primo(numero, divisor);
            numero /= divisor;
            ultimo = divisor;
        } else {
            divisor = proximo_primo(numero, divisor, ultimo);
        }
    }
    return 0;
}