// Verificação de Número Primo: Desenvolva um programa que leia um número inteiro e determine se ele é um número primo ou não.

#include <stdio.h>

int main() {
  int num, i, EhPrimo = 1; // Significa que o número é primo

  printf("Insira um número inteiro: ");
  scanf("%d", &num);

  // Verifica se o número é maior que 1
  if (num <= 1) {
    EhPrimo = 0;
  } else { // Se o número for maior que 1, verifica se é divisível por algum número entre 2 e num
    for (i = 2; i * i <= num; i++) {
      if (num % i == 0) {
        EhPrimo = 0; // Se for divisível, o número não é primo
        break;
      }
    }
  }

  if (EhPrimo) {
    printf("%d é um número primo.\n", num);
  } else {
    printf("%d não é um número primo.\n", num);
  }

  return 0;
}