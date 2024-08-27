#include <stdio.h>
#include <stdlib.h>
void digite(void);
void por(void);

int soma, x, y, i;

void por(void){
    if(x>y){
        for(i=y;i<=x;i++){
            soma+=i;
        }
    }
    else{
        for(i=x;i<=y;i++){
            soma+=i;
        }
    }
    printf("Soma=%d", soma);
}

void digite(void){
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite um outro numero: ");
    scanf("%d", &y);
    por();
}

int main(){
    digite();
}