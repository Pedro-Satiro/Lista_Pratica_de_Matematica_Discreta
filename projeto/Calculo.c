#include <stdio.h>
#include <math.h>
/*
    D é o inverso de E modulo (p-1) * (q-1)
*/
// algaritmo extendido de euclides
int euclides(int e, int b, int *x, int *y){
    if (b == 0){
        *x = 1;
        *y = 0;
        return e;
    }
    else {
        int x1, y1;
        int mdc = euclides(b, e % b, &x1, &y1);
        *x = y1;
        *y = x1 - (e /b) * y1;
        return mdc;
    }
    
}
//codigo para o inverso multiplicativo 
int moduloinverso(int e,  int m){
    int x, y;
    int mdc = euclides(e, m, &x, &y);
    if (mdc != 1){
        printf("Inverso multiplicativo não existe. \n");
        return -1;
    }
    return (x % m + m) % m;
}

//checagem se p e q são primos
int ehprimo(int numero){
    for (int contador = 2; contador <= sqrt(numero); contador++) {
        if ((numero % contador) == 0) {
            return 0;
        }
    }
    return 1;
}
int verificacao(int numero) {
    while (!ehprimo(numero))
    {
        printf("O numero digitado nao e primo\n");
        printf("Digite um novo numero: ");
        scanf("%d", &numero);
    }
    return numero;
}

int main (){

    unsigned long int q, p, n, e, z;
    
    printf("Digite o primeiro numero primo para gerar a chave publica: ");
    scanf("%ld", &p);
    p = verificacao(p);
    printf("Digite o segundo numero primo: ");
    scanf("%ld", &q);
    q = verificacao(q);

    printf("Digite o valor para E: ");
    scanf("%ld", &e);
    
    n = p * q;
    z = (p - 1) * (q - 1); 
    int inverso = moduloinverso(e, z);
    printf("inverso: %d\n", inverso);
    
    return 0;
}