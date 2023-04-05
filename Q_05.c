#include <stdio.h>
//algoritmo euclides
int alg(int num1, int num2) {
   int resto;

   while (num2 != 0) {
      resto = num1 % num2;
      num1 = num2;
      num2 = resto;
   }

   return num1;
}
int main() {
   int num1, num2, resultado;

   printf("Digite o primeiro numero: ");
   scanf("%d", &num1);
   printf("Digite o segundo numero: ");
   scanf("%d", &num2);

   resultado = alg(num1, num2);

   printf("MDC (%d, %d) = %d.\n", num1, num2, resultado);

   return 0;
}