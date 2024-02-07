#include <stdio.h>

int main() {
    int peixe, arroz, salada;

    // Informa o prato do dia
    printf("Prato do dia: Peixe acompanhado de Arroz Ou Salada\n");

    // Pede os pedidos do cliente
    printf("Digite 1 se quiser peixe, 1 se quiser arroz, 1 se quiser salada (0 para n�o escolher):\n");

    // L� os pedidos
    scanf("%i %i %i", &peixe, &arroz, &salada);

    // Verifica se o peixe foi escolhido
    if (peixe) {
        // Verifica se escolheu arroz ou salada, mas n�o ambos
        if ((arroz ^ salada) && !(arroz && salada)) {
            printf("Pedido v�lido.\n");
        } else {
            printf("Pedido inv�lido. Escolha arroz ou salada, mas n�o ambos.\n");
        }
    } else {
        printf("Pedido inv�lido. Peixe � obrigat�rio.\n");
    }

    return 0;
}


