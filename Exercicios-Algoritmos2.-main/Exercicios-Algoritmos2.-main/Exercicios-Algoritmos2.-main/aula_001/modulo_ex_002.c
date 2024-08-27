#include <stdio.h>
void leia(void);
void se(void);
int x;

void leia(void){
    printf("Digite um numero:");
    scanf("%d", &x);
    se();
}
void se(void){
    if(x%2=0){
        printf("O numero e par");
    }
    else{
        printf("O numero e impar");
    }
}

int main(){
    leia();
    se();

}