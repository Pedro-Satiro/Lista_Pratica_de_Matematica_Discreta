#include <stdio.h>

// encontrado mdc de dois numeros inteiros e a combinação linear

int euclides(int a, int b, int *s, int *t) {
    if (b == 0) {
        *s = 1;
        *t = 0;
        return a;
    }

    int s1, t1, mdc;
    mdc = euclides(b, a % b, &s1, &t1);
    *s = t1;
    *t = s1 - (a / b) * t1;
    return mdc;
}

int main() {
    int a, b, m, x, mdc, s, t;
    printf("Digite os valores de a, b e m: ");
    scanf("%d %d %d", &a, &b, &m);
    
    mdc = euclides(a, m, &s, &t);
    printf("MDC(%d, %d) = %d\n", a, m, mdc);
    printf("%d * %d + %d * %d = %d\n", s, a, t, m, mdc);
    
    // conferindo se a congruência ax ≡ b mod m tem solução
    
    if (b % mdc != 0) {
        printf("A congruência não tem solução.\n");
    }
    
    else{
        
        x = s*b;
        
        if(x>m){
            x = x%m;
        }
        
        printf("X = %d\n", x);
        printf("Solução geral: %d + %d * k", x, m);
    }
    
    
    return 0;
}
