#include <stdio.h>
int variavelglobal = 2;
int main(void){

void main2 (void);
main2();
main2();
main2();
main2();



return 0;
}

void main2 (void){

int variavel = 2;
variavel = variavel * 2;

static int variavelestatica = 2;
variavelestatica = variavelestatica *2;

printf("AUTOMATICA = %i\n", variavel);
printf("ESTATICA = %i\n", variavelestatica);
printf("GLOBAL = %i\n",variavelglobal);
}
