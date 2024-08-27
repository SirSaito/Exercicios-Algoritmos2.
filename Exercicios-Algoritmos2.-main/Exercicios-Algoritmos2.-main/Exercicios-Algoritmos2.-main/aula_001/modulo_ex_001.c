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
    if(x%4=0){
        printf("Multiplo de 4");
    }
    else{
        printf("Nao e multiplo de 4");
    }
}

int main(){
    leia();
    se();

}