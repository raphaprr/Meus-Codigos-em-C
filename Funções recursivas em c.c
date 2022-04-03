#include <stdio.h>

int main(void){

int fatorial (int x);
int num, resultado;

printf("DIGITE UM NUMERO ");
    scanf("%i",&num);

resultado = fatorial(num);
printf("%i",resultado);

return 0;
}
int fatorial (int x){

int resultado;

if(x == 0)
    {
        resultado = 1;
    }
else
    {
        resultado = x * fatorial(x-1);
    }

return resultado;
}
