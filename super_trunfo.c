#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    
    // Entrada e exibicao dos dados da Carta 1
    printf("Carta 1:\n");
    
    printf("Estado:\n");
    scanf(" %c", &estado1);

    printf("Código:\n");
    scanf("%s", codigo1);

    printf("Nome da Cidade:\n");
    fgets(nomeCidade1, 50, stdin);

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área: %.2f km²\n", area1);
    scanf("%f", &area1);
    
    printf("PIB: %.2f bilhões de reais\n", pib1);
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n");

    // Entrada e exibicao dos dados da Carta 2
    printf("Carta 2:\n");
    
    printf("Estado:\n");
    scanf(" %c", &estado2);

    printf("Código:\n");
    scanf("%s", codigo2);

    printf("Nome da Cidade:\n");
    fgets(nomeCidade2, 50, stdin);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área: %.2f km²\n", area2);
    scanf("%f", &area2);

    printf("PIB: %.2f bilhões de reais\n", pib2);
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    //Calculos 
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    printf("\n");
    
    return 0;
}
