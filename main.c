#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// integrantes:
// Luiz Claro - RM 563014
// Gabriel Romão - RM 563378
// Raphael Talarico - RM 565219

int menu(void) {
  printf("\n\n===== MENU DE EXERCÍCIOS ===== \n");
  printf("1 - Sequência de Fibonacci; \n");
  printf("2 - Fatoriais; \n");
  printf("3 - Verificar Palíndromo;\n");
  printf("4 - Verificar Substring;\n");
  printf("5 - Sair \n");

  printf("\n Escolha uma opção: ");

  int choice;
  scanf("%d", &choice);
  return choice;
}

void fibonacci(void) {
  printf("Digite a quantidade de termos da sequência de Fibonacci (1 a 50): ");
  int choose;
  scanf("%d", &choose);

  int t1 = 0, t2 = 1;
  int array[50] = {t1, t2};

  if (choose > 50 || choose < 1) {
    printf("Número inválido, tente novamente.");
    return;
  }

  printf("Sequência de Fibonacci: ");

  for (int i = 0; i <= choose - 1; i++) {
    array[i + 2] = array[i] + array[i + 1];
    printf("%d ", array[i]);
  }
}

void fatoriais(void) {
  printf("Digite um número inteiro (1 a 20): ");
  int choose;
  scanf("%d", &choose);

  if (choose > 20 || choose < 1) {
    printf("Número inválido, tente novamente.\n");
    return;
  }

  unsigned long long array[21]; // Índice de 0 a 20
  array[0] = 1;

  printf("Fatoriais:\n");

  for (int i = 1; i <= choose; i++) {
    array[i] = array[i - 1] * i;
    printf("%d! = %llu\n", i, array[i]);
  }
}

void palindromo(void) {
  printf("Digite uma palavra: ");
  char word[50];
  scanf("%s", word);

  int length = strlen(word);
  int is_palindrome = 1;

  for (int i = 0; i < length/2; i++) {
    if (word[i] != word[length - 1 - i]) {
      is_palindrome = 0;
      break;
    }
  }

  if (is_palindrome) {
    printf("A palavra é um palíndromo.\n");
  } else {
    printf("A palavra não é um palíndromo.\n");
  }
}

void substring(void) {
  printf("Digite uma palavra: ");
  char word[50];
  scanf("%s", word);

  printf("Digite uma substring: ");
  char substring[50];
  scanf("%s", substring);

  int length_word = strlen(word);
  int length_substring = strlen(substring);
  int found = 0;

  for (int i = 0; i <= length_word - length_substring; i++) {
    int match = 1;
    for (int j = 0; j < length_substring; j++) {
      if (word[i + j] != substring[j]) {
        match = 0;
        break;
      }
    }
    if (match) {
      found = 1;
      printf("A segunda string está contida na primeira.\n");
      break;
    }
  }

  if (!found) {
    printf("A segunda string NÃO está contida na primeira.\n");
  }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");


    while (1){
        switch (menu()) {
            case 1:
                fibonacci();
                break;
            case 2:
                fatoriais();
                break;
            case 3:
                palindromo();
                break;
            case 4:
                substring();
                break;
            case 5:
                return 0;
                break;
        }
    }

    return 0;
}
