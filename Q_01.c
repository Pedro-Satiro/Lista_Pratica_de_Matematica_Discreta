#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// calcula se o numero é primo
void primo(int numero, int contador) {
    if (contador == numero){
        printf("O %d e um numero Primo.\n", numero);
        return;
    }
    if (numero % contador == 0 || numero < 2) {
        printf("O %d Nao e numero Primo. \n", numero);
        return;
    }
    primo(numero, contador+1);
}
int main(){
    int contador=2,numero;
    printf("Digite um numero: ");
    scanf("%d", &numero); 
    primo(numero,contador);
    return 0;
}
