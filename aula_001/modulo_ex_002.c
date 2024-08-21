#include <stdio.h>

int se(int y){
    return(y % 2 == 0);
}

int main(){
 int x;
 printf("\t\tDigite um numero:\n");
 scanf("%d", &x);
 if(se(x))
    printf("O numero e par");

 else
    printf("O numero e impar");
}