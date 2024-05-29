#include <stdio.h>numero

int main() {
    float valor1, valor2;
    float soma, subtracao, multiplicacao, divisao;
    char continuar;

    do {
        // Solicita ao usuário o primeiro número
        printf("Digite o primeiro numero: ");
        scanf("%f", &valor1);

        // Solicita ao usuário o segundo número
        printf("Digite o segundo numero: ");
        scanf("%f", &valor2);

        // Realiza as operações aritméticas
        soma = valor1 + valor2;
        subtracao = valor1 - valor2;
        multiplicacao = valor1 * valor2;
        divisao = valor1 / valor2;

        // Exibe os resultados
        printf("\nResultados:\n");
        printf("Soma: %.2f\n", soma);
        printf("Subtracao: %.2f\n", subtracao);
        printf("Multiplicacao: %.2f\n", multiplicacao);
        printf("Divisao: %.2f\n", divisao);

        // Pergunta ao usuário se deseja continuar
        printf("\nDeseja fazer uma nova operacao? (s/n): ");
        // Limpa o buffer do stdin
        while ((getchar()) != '\n'); // Descartar caracteres até o newline
        scanf("%c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Encerrando o programa...\n");

    return 0;
}
