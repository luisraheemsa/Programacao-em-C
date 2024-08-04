#include <stdio.h>

int main() {
    int numero, quadrado;

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Calcula o quadrado do número
    quadrado = numero * numero;

    // Exibe o resultado
    printf("O quadrado de %d é: %d\n", numero, quadrado);

    return 0;
}