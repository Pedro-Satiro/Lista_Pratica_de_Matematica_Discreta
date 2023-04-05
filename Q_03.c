#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int primo(int numero) {
    for (int contador = 2; contador <= sqrt(numero); contador++) {
        if ((numero % contador) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int numero;
    int divisor = 2;
    printf("digite um numero: ");
    scanf("%d", &numero);

    printf("Os divisores primos sao : ");
    while (numero != 1) {
        if (numero % divisor == 0) {
            if (numero / divisor == 1) {
                printf("%d", divisor);
            } else {
                printf("%d * ", divisor);
            }
            numero = numero / divisor;
        } else {
            int flag = 1;
            for (int i = divisor+1; i <= sqrt(numero); i++) {
                if (primo(i)) {
                    divisor = i;
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                divisor = numero;
            }
        }
    }
    return 0;
}