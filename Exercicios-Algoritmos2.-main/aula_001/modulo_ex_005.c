#include<stdio.h>

int digite(int u){
    printf("\t\tDigite um numero natural\t\t\n");
    scanf("%d", &u);
    return("%d", u);
}

int main(){
    int i=0, n=0;
    float v=1;
    digite(&n);
    for(i=0;i<=n;i++){
        n++;
        v*=n;
    }
    printf("%f", v);
}