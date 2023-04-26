/*
Escrever um programa para listar números primos sequencialmente. Você deve
otimizar o programa para que ele liste o maior número possível de primos em 60
segundos.*/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void primo(int numero, int contador) {
    if (numero % contador == 0 || numero < 2) {
        
        return;
    }
    if (contador <= sqrt(numero)){
        printf("%d\n", numero);
        return;
    }
    contador+=1;
    return primo(numero, contador);
}

void loop(time_t end_time,int numero) {
    if (time(NULL) >= end_time)
    {
        return;
    }
    primo(numero,2);
    numero++;
    return loop(end_time,numero);
}
int main(){
    time_t start_time = time(NULL);
    time_t end_time = start_time + 60;
    int numero=1;
    loop(end_time,numero);
    return 0;
}
