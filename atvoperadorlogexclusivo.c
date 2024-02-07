#include <stdio.h>

int main() {
    int peixe, arroz, salada;

    // Informa o prato do dia
    printf("Prato do dia: Peixe acompanhado de Arroz Ou Salada\n");

    // Pede os pedidos do cliente
    printf("Digite 1 se quiser peixe, 1 se quiser arroz, 1 se quiser salada (0 para não escolher):\n");

    // Lê os pedidos
    scanf("%i %i %i", &peixe, &arroz, &salada);

    // Verifica se o peixe foi escolhido
    if (peixe) {
        // Verifica se escolheu arroz ou salada, mas não ambos
        if ((arroz ^ salada) && !(arroz && salada)) {
            printf("Pedido válido.\n");
        } else {
            printf("Pedido inválido. Escolha arroz ou salada, mas não ambos.\n");
        }
    } else {
        printf("Pedido inválido. Peixe é obrigatório.\n");
    }

    return 0;
}


