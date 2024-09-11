#include <stdio.h>

// Função principal
int main() {
    int choice;
    double A, B;

    // Solicita ao usuário os números A e B
    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);

    // Oferece uma lista de operações matemáticas
    printf("\nEscolha uma operação:\n");
    printf("1. Adição (A + B)\n");
    printf("2. Subtração (A - B)\n");
    printf("3. Multiplicação (A * B)\n");
    printf("4. Divisão (A / B)\n");
    printf("5. Fatorial de A\n");
    printf("6. Potência (A^B)\n");
    printf("7. Raiz quadrada de A\n");
    printf("Digite o número da operação desejada: ");
    scanf("%d", &choice);

 

    return 0;
}
