#include <stdio.h>

int modoinverso(int a, int m)
{
    int m_i = m, t, q; //m_i m inicial
    int x_i = 0, x1 = 1; // x_1 x inicial

    if (m == 1)
        return 0;

    while (a > 1) {
        //q é o quociente da divisão a / m
        q = a / m;
        t = m;

        //m é o resto da divisão a / m
        m = a % m;
        a = t;
        t = x_i;

        // Atualiza x_i e x1
        x_i = x1 - q * x_i;
        x1 = t;
    }

    // Se x1 for negativo, adiciona m até ficar positivo
    if (x1 < 0)
        x1 += m_i;

    return x1;
}

int main(){
    int a, b;
    int inverdo, mod;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    mod = modoinverso(a, b);
    printf("O inverso de %d mod %d é %d\n", a, b, mod);
    return 0;
}
