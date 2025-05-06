#include <stdio.h>
#include <stdlib.h>

void menu(void) {
  printf("===== MENU DE EXERCÍCIOS ===== \n");
  printf("1 - Sequência de Fibonacci; \n");
  printf("2 - Fatoriais; \n");
  printf("3 - Verificar Palíndromo;\n");
  printf("4 - Verificar Substring;\n");
  printf("5 - Sair \n");

  printf("\n Escolha uma opção: ");
}

void fibonacci(void) {
  int n;
  printf("Digite a quantidade de termos da sequência de Fibonacci (1 a 50): ");
  scanf("%d", &n);

  while (n<1 || n>50){
    printf("Número inválido\n");
    printf("Digite a quantidade de termos da sequência de Fibonacci (1 a 50): ");
    scanf("%d", &n);
  }


  int fibonacci[n];

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            fibonacci[i] = 0;
        } else if (i == 1) {
            fibonacci[i] = 1;
        } else {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        }
    }

    printf("Sequência de Fibonacci com %d termos:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci[i]);
    }
}

int main() {
  menu();
  int choice;
  scanf("%d", &choice);

  switch (choice) {
    case 1:
      fibonacci();
      break;
  }

  return 0;
}
