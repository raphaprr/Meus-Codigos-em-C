#include <stdio.h>

int main (void){

float main2 (float num1, float num2);

float a,b,soma;

printf("DIGITE DOIS NUMEROS");
scanf("%f",&a);
scanf("%f",&b);

soma = main2(a,b);
printf("A soma e : %.3f",soma);
return 0;
}
float main2 (float num1, float num2){

float negativo(float neg);

if(num1<0){
    num1 = negativo(num1);
}
if(num2<0){
    num2 = negativo(num2);
}
return num1+num2;
}
float negativo(float neg){

return neg * -1;
}
