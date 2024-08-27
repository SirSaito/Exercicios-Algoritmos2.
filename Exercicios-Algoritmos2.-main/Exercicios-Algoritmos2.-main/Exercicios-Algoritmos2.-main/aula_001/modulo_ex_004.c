#include <stdio.h>

float volume(float u){
    printf("Digite o raio da esfera\n");
    scanf("%f", &u);
    return("%f", u);
}

int main(){
    float u, p=3.14, t, i, re=0, v;
    volume(u);
    re=u*u;
    re=u*re;
    t=3*p;
    t*=re;
    v=t/3;
    printf("O volume de uma esfera e igual ha: %f\n", v);
}