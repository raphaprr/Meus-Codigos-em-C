#include <stdio.h>

int main (void){

int fatorial = 5;
int resposta = 1;

for(;fatorial > 1; --fatorial){
    resposta = resposta*fatorial;
    printf("%i\n\n",resposta);
}


return 0;
}
