// Contagem de Caracteres em uma String: Crie um programa que leia uma string e conte quantos caracteres (incluindo espaços) ela possui.

#include <stdio.h>

int main() {
  char str[100]; //Declara uma string de tamanho 100
  int i = 0; //Inicializa um contador de string

  printf("Insira uma string: ");
  scanf("%[^\n]", str); //Lê a string inserida

  // Percorre a string até encontrar o caractere nulo '\0'
  // While eh um loop que executa enquanto a condição for verdadeira
  while (str[i] != '\0') {
    i++; // Incrementa o contador de string
  }

  printf("Numeros de caracteres = %d\n", i);

  return 0;
}