#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    // Entrada Carta 1
    printf("=== Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Entrada Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    float superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1);
    float superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2);

    // Comparações (1 = Carta 1 vence, 0 = Carta 2 vence)
    int compPop = populacao1 > populacao2;
    int compArea = area1 > area2;
    int compPIB = pib1 > pib2;
    int compPontos = pontos1 > pontos2;
    int compDensidade = densidade1 < densidade2; // menor vence
    int compPibCapita = pibPerCapita1 > pibPerCapita2;
    int compSuper = superPoder1 > superPoder2;

    // Saída
    printf("\n=== Comparacao de Cartas ===\n");

    printf("Populacao: Carta %d venceu (%d)\n", compPop ? 1 : 2, compPop);
    printf("Area: Carta %d venceu (%d)\n", compArea ? 1 : 2, compArea);
    printf("PIB: Carta %d venceu (%d)\n", compPIB ? 1 : 2, compPIB);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", compPontos ? 1 : 2, compPontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", compDensidade ? 1 : 2, compDensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", compPibCapita ? 1 : 2, compPibCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", compSuper ? 1 : 2, compSuper);

    return 0;
}
