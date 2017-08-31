#include <stdio.h>

//Elabore um programa em C, para gerar a sucessão: 0 1 2 -3 4 5 -6 7 8 -9.
//https://brainly.com.br/tarefa/11183000

main(){
  for(int i = 0; i < 10; i++){
    if(i % 3 == 0){
      printf(" %d ",(-i));
    }else{
      printf(" %d ", i);
    }
  }
}

//https://repl.it/Kaib
