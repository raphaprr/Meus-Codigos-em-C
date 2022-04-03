#include <stdio.h>
#include <stdlib.h>

int main(void){
                //COLUNAS
                // 0 1 2
int l,c,matriz[3][3]={{1,2,3}, //LINHAS
                      {4,5,6},
                      {7,8,9}};
for(l=0;l<3;++l){
    for(c=0;c<3;++c){
        printf("%i",matriz[l][c]);
    }
    printf("\n");
}


    return 0;
}
