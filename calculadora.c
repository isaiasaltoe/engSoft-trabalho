#include <stdio.h>
#include <math.h>


// Função para calcular o fatorial de um número inteiro não-negativo
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Função para calcular a potência de base elevado a exponent
double power(double base, int exponent) {
    return pow(base, exponent);
}

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
            printf("Resultado da adição: %.2f\n", A + B);
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
                 if (A >= 0 && A == (int)A) {  // Verifica se A é não-negativo e inteiro
                printf("Resultado do fatorial de A: %lld\n", factorial((int)A));
            } else {
                printf("Erro: O valor de A deve ser um número inteiro não-negativo!\n");
            }
            break;
        case 6:
         printf("Resultado da potência (A^B): %.2f\n", power(A, (int)B));
            break;
           
        case 7:
           if (A >= 0) {
                printf("Resultado da raiz quadrada de A: %.2f\n", sqrt(A));
            } else {
                printf("Erro: Não é possível calcular a raiz quadrada de um número negativo!\n");
            }
            break;
            
        default:
            printf("Opção inválida!\n");
            break;
    }

 

    return 0;
}
