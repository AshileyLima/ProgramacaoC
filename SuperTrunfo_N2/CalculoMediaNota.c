#include <stdio.h>

int main () {
  //int nota1, nota2, nota3;
  //int media;
  float nota1, nota2, nota3;
  float media;

  //Calcular a média de três notas inseridas pelo usuário

  printf("*** Programa de Cálculo de Média ***: \n");
  printf("Digite a sua primeira nota: \n");
  //scanf("%d", &nota1);
  scanf("%f", &nota1);

  printf("*** Programa de Cálculo de Média ***: \n");
  printf("Digite a sua segunda nota: \n");
  //scanf("%d", &nota2);
  scanf("%f", &nota2);

  printf("*** Programa de Cálculo de Média ***: \n");
  printf("Digite a sua terceira nota: \n");
  //scanf("%d", &nota3);
  scanf("%f", &nota3);

  //Media das notas a serem calculadas
  media = (nota1 + nota2 + nota3) / 3;
  //media = (float)(nota1 + nota2 + nota3) / 3; Formato utilizando o int, %d, forçando para se tornar o cast (Conversão Explicita)

  //Media das notas a serem exibidas
  //printf("A Média é: %d", media);
  //printf("A Média é: %f", media); pode se definir a quantidade de casas decimas, adicionando .qtd, ex: %.2f
  printf("A Média é: %.2f", media);


  return 0;



}