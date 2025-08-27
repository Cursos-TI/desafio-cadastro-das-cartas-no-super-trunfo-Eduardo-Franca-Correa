#include <stdio.h>

int main() {
    // Estado pode ter 2 letras (ex.: ES, SP) + '\0'
    char estado1[3], estado2[3];

    // Código da carta (ex.: A01) + '\0'
    char codigo1[4], codigo2[4];

    // Nome da cidade (até 49 caracteres + '\0')
    char cidade1[50], cidade2[50];

    // População agora é unsigned long int (para números maiores)
    unsigned long int populacao1, populacao2;

    // Pontos turísticos é inteiro
    int pontos1, pontos2;

    // Área e PIB com casas decimais
    float area1, area2;
    float pib1, pib2;

    /* ================= CARTA 1 ================= */
    printf("Digite o estado da Carta 1 (ex: ES): \n");
    scanf(" %2s", estado1);

    printf("Digite o código da Carta 1 (ex: A01): \n");
    scanf(" %3s", codigo1);

    printf("Digite o nome da cidade da Carta 1: \n");
    scanf(" %49[^\n]", cidade1);

    printf("Digite a população da Carta 1: \n");
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

    printf("Digite a área da Carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos da Carta 2: \n");
    scanf("%d", &pontos2);

    /* ================= CÁLCULOS ================= */
    // Densidade Populacional = população / área (cuidado com divisão por zero)
    float densidadePopulacional1 = (area1 > 0.0f) ? ((float)populacao1 / area1) : 0.0f;
    float densidadePopulacional2 = (area2 > 0.0f) ? ((float)populacao2 / area2) : 0.0f;

    // PIB per Capita = PIB / população (cuidado com divisão por zero)
    float pibPerCapita1 = (populacao1 > 0UL) ? (pib1 / (float)populacao1) : 0.0f;
    float pibPerCapita2 = (populacao2 > 0UL) ? (pib2 / (float)populacao2) : 0.0f;

    // Inverso da densidade = 1 / densidade = área / população (quanto menor a densidade, maior o poder)
    float invDens1 = (populacao1 > 0UL) ? (area1 / (float)populacao1) : 0.0f;
    float invDens2 = (populacao2 > 0UL) ? (area2 / (float)populacao2) : 0.0f;

    // Super Poder (como float) — somando todos os atributos numéricos
    // Atenção às conversões: convertemos população e pontos para float antes de somar
    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibPerCapita1 + invDens1;
    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibPerCapita2 + invDens2;

    /* ================= SAÍDA: DADOS ================= */
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.6f reais\n", pibPerCapita1);
    printf("Super Poder: %.6f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.6f reais\n", pibPerCapita2);
    printf("Super Poder: %.6f\n", superPoder2);

    /* ================= COMPARAÇÕES ================= */
    // Para cada atributo: 1 significa "Carta 1 venceu"; 0 significa "Carta 2 venceu"
    int c1_pop   = (populacao1 > populacao2);
    int c1_area  = (area1 > area2);
    int c1_pib   = (pib1 > pib2);
    int c1_pontos= (pontos1 > pontos2);
    int c1_dens  = (densidadePopulacional1 < densidadePopulacional2); // menor vence
    int c1_ppc   = (pibPerCapita1 > pibPerCapita2);
    int c1_sp    = (superPoder1 > superPoder2);

    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", c1_pop ? 1 : 2, c1_pop);
    printf("Área: Carta %d venceu (%d)\n", c1_area ? 1 : 2, c1_area);
    printf("PIB: Carta %d venceu (%d)\n", c1_pib ? 1 : 2, c1_pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", c1_pontos ? 1 : 2, c1_pontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", c1_dens ? 1 : 2, c1_dens);
    printf("PIB per Capita: Carta %d venceu (%d)\n", c1_ppc ? 1 : 2, c1_ppc);
    printf("Super Poder: Carta %d venceu (%d)\n", c1_sp ? 1 : 2, c1_sp);

    return 0;
}
