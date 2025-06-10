#include <stdio.h>
int main() {
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)           
    Divisão (/)
   */



int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    //operação soma

    subtracao = numero1 - numero2;
    // operação subtração

    multiplicacao = numero1 * numero2;
    // operação multiplicação

    divisao = numero1 / numero2;
    // operação divisão 

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);

    return 0;


}