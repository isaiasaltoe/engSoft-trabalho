### Arquivo `calculadora.c`

O código-fonte é dividido nas seguintes partes:

- **Inclusão de Bibliotecas**
  - `#include <stdio.h>`: Biblioteca padrão para operações de entrada e saída.
  - `#include <math.h>`: Biblioteca matemática para funções avançadas como `pow` e `sqrt`.

- **Funções**
  - `long long factorial(int n)`: Calcula o fatorial de um número inteiro não-negativo `n`. Usa um loop para multiplicar os números de 1 até `n`.
  - `double power(double base, int exponent)`: Calcula a potência de `base` elevado a `exponent` usando a função `pow` da biblioteca matemática.

- **Função Principal (`main()`)**
  - Solicita ao usuário dois números (`A` e `B`).
  - Oferece uma lista de operações matemáticas e solicita ao usuário que escolha uma operação.
  - Executa a operação escolhida e exibe o resultado. As operações disponíveis são:
    1. Adição
    2. Subtração
    3. Multiplicação
    4. Divisão
    5. Fatorial de `A`
    6. Potência (`A` elevado a `B`)
    7. Raiz quadrada de `A`

## Dependências

Este projeto depende das seguintes bibliotecas padrão do C:
- `stdio.h`: Para funções de entrada e saída.
- `math.h`: Para funções matemáticas avançadas como `pow` e `sqrt`.

Para compilar o programa, você precisa de um compilador C que suporte essas bibliotecas. O `gcc` é uma escolha comum e amplamente disponível.

## Compilação e Execução

1. **Compilar o Código**

   Use o comando abaixo para compilar o código-fonte com `gcc`:

   ```bash
   gcc -o calculadora calculadora.c -lm
