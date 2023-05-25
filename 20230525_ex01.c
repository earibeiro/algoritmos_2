#include <stdio.h>

int somatoria(int n){
    if(n == 1){
        return 1;
    }
    else {
        return n + somatoria(n-1);
    }
}

int main(){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("A somatoria de %d ate 1 é: %d", n, somatoria(n));
}
