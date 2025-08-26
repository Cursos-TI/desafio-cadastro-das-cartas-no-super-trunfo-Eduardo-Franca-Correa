#include <stdio.h>

int main() {
    // Estado pode ter 2 letras (ex.: ES, SP) + '\0' → por isso [3]
    char estado1[3], estado2[3];

    // Código da carta (ex.: A01) + '\0' → por isso [4]
    char codigo1[4], codigo2[4];

    // Nome da cidade (até 49 caracteres + '\0')
    char cidade1[50], cidade2[50];

    // População e pontos turísticos são números inteiros
    int populacao1, populacao2;
    int pontos1, pontos2;

    // Área e PIB são valores com casas decimais
    float area1, area2;
    float pib1, pib2;

    /* ================= CARTA 1 ================= */

    printf("Digite o estado da Carta 1 (ex: ES): \n");
    // %2s → lê no máximo 2 caracteres, garantindo espaço para o '\0'
    scanf(" %2s", estado1);

    printf("Digite o código da Carta 1 (ex: A01): \n");
    // %3s → lê até 3 caracteres (A01) + '\0'
    scanf(" %3s", codigo1);

    printf("Digite o nome da cidade da Carta 1: \n");
    // %[^\n] → lê até a quebra de linha (permite nomes com espaço)
    scanf(" %49[^\n]", cidade1);

    printf("Digite a população da Carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da Carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos da Carta 1: \n");
    scanf("%d", &pontos1);

    /* ================= CARTA 2 ================= */

    printf("\nDigite o estado da Carta 2 (ex: SP): \n");
    scanf(" %2s", estado2);

    printf("Digite o código da Carta 2 (ex: B02): \n");
    scanf(" %3s", codigo2);

    printf("Digite o nome da cidade da Carta 2: \n");
    scanf(" %49[^\n]", cidade2);

    printf("Digite a população da Carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da Carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos da Carta 2: \n");
    scanf("%d", &pontos2);

    /* ================= SAÍDA ================= */

    // Exibe os dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    // Exibe os dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}
