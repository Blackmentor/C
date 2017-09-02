//pergunta https://brainly.com.br/tarefa/11208577
//https://repl.it/Kdvn


#include <stdio.h>

main(){
  //Faça um algoritmo que leia do usuários três variáveis, multiplique apenas os números pares e imprima o resultado ao final.

  int n = 0, n_pares = 1;

  for(int i = 0; i < 3; i++){

    printf("Digite um número: ");
    scanf("%d", &n);

    if(n % 2 == 0)
      n_pares *= n;

    }
  printf("Total: %d", n_pares);
}
