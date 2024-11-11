// Soma de Números em um Array: Faça um programa que leia 5 números inteiros, armazene-os em um array e calcule a soma total desses números.

#include <stdio.h>

int main() {
  int numeros[5];
  int i;
  int soma = 0;

  printf("Insira 5 números inteiros:\n");
  for (i = 0; i < 5; i++) {
    scanf("%d", &numeros[i]);
  }

  for (i = 0; i < 5; i++) {
    soma += numeros[i];
  }

  printf("A soma dos números é: %d\n", soma);

  return 0;
}