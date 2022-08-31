 #include <stdio.h>

//Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.

int main(void) {

  float b;
  float h;

  printf("base");
  scanf("%f", &b);
  printf("altura");
  scanf("%f", &h);
  float media = b * h  * 0.5;
  
  printf("Area do triangulo é %f", media);
  return 0;
}