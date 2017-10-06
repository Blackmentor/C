#include <stdio.h>

main(){

  float num, calc = 0, n = 0;
  int verificador = 1;

  do{
    printf("Digite um número: ");
    scanf("%f", &num);

    if(num >= 0){
     calc += num; // soma os numeros positivos
     n++; //qnd de numeros positivos
    }else{
      verificador = 0; // se nao for positivo
    }
  }while(verificador == 1);

  printf("Média: %.2f", (calc / n));
}


//Feito por Willian
//Pergunta https://brainly.com.br/tarefa/11864903
