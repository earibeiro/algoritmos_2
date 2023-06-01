/*Construa uma função em C que receba como argumentos dois valores inteiros, calcule e exiba os valores obtidos pela multiplicação entre ambos e pela adição entre ambos.
Construa três soluções diferentes:
a) Com passagem de parâmetros por valor;
b) Com passagem de parâmetros por referência;
c) Sem passagem de parâmetros*/

#include <stdio.h>

void passaValor (int a, int b)
{
    printf("Multiplicacao de A x B = %d \n", a*b);
    printf("Adicao de A + B = %d \n\n", a+b);
}

void passaRef (int *a, int *b,int *soma, int *produto)
{
    *produto = *a * *b;
    *soma = *a + *b;
    printf("Multiplicacao de A x B = %d \n", *produto);
    printf("Adicao de A + B = %d \n\n", *soma);
}

void normal ()
{
    int a, b;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Multiplicacao de A x B = %d \n", a*b );
    printf("Adicao de A + b : %d \n\n", a+b);
}

int main()
{
    int a, b, soma, produto;
    printf("Digite o valor de A:");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    passaValor(a, b);
    passaRef(&a, &b, &soma, &produto);
    normal();
    return 0;
}
