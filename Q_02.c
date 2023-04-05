#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t start_time = time(NULL);
    time_t end_time = start_time + 60;
    int numero=2;
    while (time(NULL) < end_time) {
        int flag = 1;
        double limite = sqrt(numero);
        for (int contador = 2; contador <= limite; contador++) {
            if ((numero % contador) == 0 && contador != 1) {   
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("%d\n",numero);
        }
        numero++;
    }
    return 0;
}