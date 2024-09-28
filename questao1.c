// // Cálculo de Fatorial: Crie um programa que calcule e imprima o fatorial de
// um
// // número inteiro fornecido pelo usuário.

// #include <stdio.h>

// int main() {
//   int num, i;
//   unsigned long long fatorial = 1; // unsigned long long é o tipo de dado que
//                                    // armazena números inteiros de maior
//                                    tamanho

//   printf("Digite um número inteiro não negativo: ");
//   scanf("%d", &num);

//   if (num < 0) {
//     printf("Não existe fatorial de número negativo.\n");
//   } else {
//     for (i = 1; i <= num; i++) {
//       fatorial *= i; // fatorial = fatorial * i, multiplica o valor de
//       fatorial
//                      // por i e armazena o resultado em fatorial
//     }
//     printf("Fatorial de %d é %llu\n", num, fatorial);
//   }
//   return 0;
// }