// #include <stdio.h>

// //Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.

// int main(void) {

//   int b;
//   int h;
//   scanf("%d", &b);
//   scanf("%d", &h);
//   int media = b * h  * 0.5;
  
//   printf("%d", media);
//   return 0;
// }



 #include <stdio.h>

//Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.

int main(void) {

  float b;
  float h;
  scanf("%f", &b);
  scanf("%f", &h);
  float media = b * h  * 0.5;
  
  printf("%f", media);
  return 0;
}