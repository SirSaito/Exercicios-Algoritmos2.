#include <stdio.h>
#include <stdlib.h>

int se1(int u, int o){
    return(u>o);
}

int main(){
 int x, y, i=0, soma=0;
 printf("\t\tDigite um numero:\n");
 scanf("%d", &x);
 printf("\t\tDigite um outro numero:\n");
 scanf("%d", &y);
 if(se1(x, y)){
    for(i=y;i<=x; i++){
        soma+=i;
    }

 }
 else{
    for(i=x;i<=y; i++){
        soma+=i;
    }
 }
 printf("Soma final=%d\n", soma);
}