//Calcular a área de uma circunferencia

#include <stdio.h>

main(){
  float area, raio, pi;

  printf("Digite o raio: ");
  scanf("%f",&raio);

  pi = 3.14159;

  area = pi * (raio * raio);

  printf("Area total: %.4f", area);
}
