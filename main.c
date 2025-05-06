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
  int n,proximo,a = 0, b = 1;
  printf("Digite a quantidade de termos da sequência de Fibonacci (1 a 50): ");
  scanf("%d", &n);

  while (n<1 || n>50){
    printf("Número inválido\n");
    printf("Digite a quantidade de termos da sequência de Fibonacci (1 a 50): ");
    scanf("%d", &n);
  }


  printf("Sequência de Fibonacci: ");

  for (int i = 0; i <= n-1; i++) {
    printf("%d ", a);
        proximo = a + b;
        a = b;
        b = proximo;
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
