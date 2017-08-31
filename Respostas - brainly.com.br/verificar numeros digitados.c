/**
 * Crie um programa que leia inteiros positivos pelo teclado e ao final informe quantos números
 foram digitados no intervalo de [0 a 100], quantos foram digitados no intervalo de [101 a 200],
 quantos foram digitados no intervalo de [201 a 400] e quantos foram digitados no intervalo de [401 a ∞).
  O programa deve parar de solicitar números quando um valor negativo for digitado.

  https://brainly.com.br/tarefa/11159904
  https://repl.it/Kap9/1

  **/



#include <stdio.h>

main(){
  int n;
  int intervalo_0_100 = 0, intervalo_101_200 = 0, intervalo_201_400 = 0, intervalo_400_ = 0;

  printf("Digite um número: ");
  scanf("%d", &n);

  while(n >= 0){

    printf("Digite um número: ");
    scanf("%d", &n);

    if(n <= 100)
      intervalo_0_100 += 1;
    else if(n <= 200)
      intervalo_101_200 += 1;
    else if(n <= 400)
      intervalo_201_400 += 1;
    else
      intervalo_400_ += 1;
  }

  printf("[0 ~ 100]: %d\n", intervalo_0_100);
  printf("[101 ~ 200]: %d\n", intervalo_101_200);
  printf("[201 ~ 400]: %d\n", intervalo_201_400);
  printf("[401 ~ ...]: %d", intervalo_400_);
}
