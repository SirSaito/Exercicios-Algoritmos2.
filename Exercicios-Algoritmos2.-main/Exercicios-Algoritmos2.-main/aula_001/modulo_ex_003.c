#include <stdio.h>
#include <stdlib.h>

int soma(int k){
    k++;
    printf("%d", k);
}

int main(){
 int x, y, i=0;
 printf("\t\tDigite um numero:\n");
 scanf("%d", &x);
 printf("\t\tDigite um outro numero:\n");
 scanf("%d", &y);
 if(x>y){
    while(y<x){
        i=y;
        soma(i);
    }

 }
 else{
    while(x<y){
        i=x;
        soma(i);
    }
 }
}