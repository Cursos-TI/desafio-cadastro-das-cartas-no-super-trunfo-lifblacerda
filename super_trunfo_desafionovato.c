#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4]; // Ex: A01, B03 (3 caracteres + 1 para '\0')
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

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

    printf("\n");
    
    return 0;
}
