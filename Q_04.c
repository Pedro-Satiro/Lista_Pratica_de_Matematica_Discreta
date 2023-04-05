#include <stdio.h>

int main() {
    int num1, num2, i, mdc = 1, mmc = 1;
    
    printf("Digite dois numeros inteiros: ");
    scanf("%d\n%d", &num1, &num2);
    
    // Calcula o MDC
    for(i = 2; i <= num1 && i <= num2; i++) {
        while(num1 % i == 0 && num2 % i == 0) {
            mdc *= i;
            num1 /= i;
            num2 /= i;
        }
    }
    
    // Calcula o MMC
    mmc = mdc * num1 * num2;
    
    printf("O MDC dos dois numeros eh %d\n", mdc);
    printf("O MMC dos dois numeros eh %d\n", mmc);
    
    return 0;
}
