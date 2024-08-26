#include <stdio.h>

int se(int y){
    return(y % 4 == 0);
}

int main(){
 int x;
 printf("\t\tDigite um numero:\n");
 scanf("%d", &x);
 if(se(&x))
    printf("E multiplo de 4");

 else
    printf("Nao e multiplo de 4");
}