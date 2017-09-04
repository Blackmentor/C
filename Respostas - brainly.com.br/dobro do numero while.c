//Pergunta: https://brainly.com.br/tarefa/11225808
//Resposta: https://repl.it/KfrK

#include <stdio.h>

main(){
  //Enquanto numero informado for maior que 0, imprimir o dobro do mesmo

  int n;

  printf("Digite um número: ");
  scanf("%d", &n);

  while(n > 0){

    printf("Dobro do número: %d", (n * 2));

    printf("\nDigite um número: ");
    scanf("%d", &n);

  }
}
