//pergunta: https://brainly.com.br/tarefa/11227722
// resposta: https://repl.it/Kfuh

#include <stdio.h>

main(){
  //Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um algoritmo para converter este tempo em anos, meses e dias. Assuma que cada mês possui sempre 30 dias. Como fazer em pseudocódigo no Visualg?

  int dias = 0;
  float meses = 0, anos = 0;

  printf("Digite a quantidade de dias: ");
  scanf("%d", &dias);

  meses = dias / 30; //Converte dias para meses;
  anos = meses / 12; // Converte os meses em anos '12 meses = 1 ano';


  printf("Quantidade em meses: %.1f", meses);
  printf("\nQuantidade em anos: %.1f", anos);

  //Considero que pode-se ter anos e meses quebrados exemplo: 1.40 (1 ano e 4 meses)

}
