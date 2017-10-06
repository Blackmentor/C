#include <stdio.h>

main(){

  int idade, maioridade = 0;
  float SomaIdades = 0;


  for(int i = 1; i <= 5; i++){
    printf("Digite a idade da %d pessoa: ", i);
    scanf("%d", &idade);

    SomaIdades += idade; //Soma as idades

    if(idade >= 18){
      maioridade++; //Contador de idade maior ou igual a 18
    }
  }

  printf("%d são maiores de idade\n", maioridade);
  printf("Media das idades %.2f", (SomaIdades / 5));

}

//https://brainly.com.br/tarefa/11852082
//Feito por Willian Santos
