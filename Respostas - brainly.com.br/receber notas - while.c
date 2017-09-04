//Pergunta: https://brainly.com.br/tarefa/11232648
// Resposta: https://repl.it/Kfog/1



#include <stdio.h>

main(){
  //Escreva um programa em C que receba as notas de um aluno até que a condição de saída seja ="s". Ao final calcule a média do aluno .(Use o Loop While )

  char saida = 'n';
  float nota, calculo = 0;
  int cont = 0;

  while(saida != 's'){
    printf("\nDigite a nota: ");
    scanf("%f", &nota);

    calculo += nota; // Soma os valores das notas
    cont++; //armazena cada vez que digita 1 nova nota

    printf("Parar? (s/n): ");
    scanf(" %c", &saida);
  }

  printf("Média: %.2f", (calculo / cont));
}
