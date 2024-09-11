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
    
     // Executa a operação escolhida e exibe o resultado
    switch (choice) {
        case 1:
            
            break;
        case 2:
            printf("Resultado da subtração: %.2f\n", A - B);
            break;
        case 3:
            
            break;
        case 4:
            if (B != 0) {
                printf("Resultado da divisão: %.2f\n", A / B);
            } else {
                printf("Erro: Divisão por zero!\n");
            }
            break;
        case 5:
           
            break;
        case 6:
           
        case 7:
           
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

 

    return 0;
}
