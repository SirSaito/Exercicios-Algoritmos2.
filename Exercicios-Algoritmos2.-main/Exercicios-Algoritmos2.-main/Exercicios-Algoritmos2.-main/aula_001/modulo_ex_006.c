#include<stdio.h>

int base(int b){
    printf("\t\tDigite a base:\n");
    scanf("%d", &b);
    return("%d", b);
}

int expoente(int e){
    printf("\t\tDigite o expoente:\n");
    scanf("%d", &e);
    return("%d", e);
}

int main(){
    int x, y, i, m;
    base(&x);
    expoente(&y);
    for(i=0;i<=y;i++){
        m*=x;
    }
    printf("\t\tRESULTADO:%d", m);
}