#include <stdio.h>
#include <math.h>

// Função para calcular fatorial
long long factorial(int n) {
    long long result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Função para calcular potência
double power(double base, int exponent) {
    return pow(base, exponent);
}

int main() {
    int choice;
    double num1, num2, result;

    printf("Digite o primeiro numero (A): ");
    scanf("%lf", &num1);

    printf("Digite o segundo numero (B): ");
    scanf("%lf", &num2);

    printf("Escolha uma operacao:\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    printf("5. A!\n");
    printf("6. A^B\n");
    printf("7. SQRT(A)\n");
    printf("Digite sua escolha (1-7): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("= %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("= %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("= %.2f\n", result);
            break;
        case 4:
            if(num2 != 0) {
                result = num1 / num2;
                printf("= %.2f\n", result);
            } else {
                printf("Erro! 0/0.\n");
            }
            break;
        case 5:
            if(num1 >= 0 && num1 == (int)num1) {
                result = factorial((int)num1);
                printf("= %lld\n", result);
            } else {
                printf("Erro! !-A ou !float.\n");
            }
            break;
        case 6:
            result = power(num1, (int)num2);
            printf("= %.2f\n", result);
            break;
        case 7:
            if(num1 >= 0) {
                result = sqrt(num1);
                printf("= %.2f\n", result);
            } else {
                printf("Erro! SQRT(-A)\n");
            }
            break;
        default:
            printf("Erro! != 1;7\n");
    }

    return 0;
}
