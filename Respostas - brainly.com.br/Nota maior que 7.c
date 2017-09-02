//Pergunta:https://brainly.com.br/tarefa/11210564


#include <stdio.h>

main(){
  //Faça um algoritmo que leia do usuário 2 variáveis, imprima aprovado se as duas forem maior do que 7, imprima em exame se ao uma for maior que 5 e a outra maior do que 7 e imprima reprovado se as duas forem menores do que 5.

  int n_1, n_2;

  printf("Primeiro número: ");
  scanf("%d", &n_1);

  printf("Segundo número: ");
  scanf("%d", &n_2);

  if(n_1 > 7 && n_2 > 7)
    printf("Aprovado!");
  else if(n_1 > 7 || n_2 > 7)
    printf("Exame!");
  else
    printf("Reprovado!");
}
