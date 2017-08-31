//Pergunta: https://brainly.com.br/tarefa/11182080
//https://repl.it/Ka7p


#include <stdio.h>
#include <math.h> //Biblioteca de matematica

main(){
 float a, b, c, x1, x2, delta, raiz_delta;

 //Seção de comandos
 printf("Cálculo dsa raizes da equação de segundo grau\n");
 printf("Digite os coeficientes de a, b e c \n");

 printf("Coeficiente de a: \n");
 scanf("%f", &a);

 printf("Coeficiente de b: \n");
 scanf("%f", &b);

 printf("Coeficiente de c: \n");
 scanf("%f", &c);

 delta = (b * b) - 4 * a * c;

 if(delta < 0){
   printf("Raizes não existem no domínio dos números reais\n");
 }
 else{
   raiz_delta = pow(delta, 2); //Raiz quadrada de delta
   x1 = (-b + raiz_delta) / (2 * a);
   x2 = (-b - raiz_delta) / (2 * a);

  printf("x1 = %f\n", x1);
  printf("x2 = %f", x2);
 }
}
