#include <stdio.h>

int main() {

    // Dados da Carta 1
    char estado1;
    char codigo1[5];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    // Entrada da Carta 1
    printf("Digite uma letra de (A-H) para o estado da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01) para a Carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", nome1);

    printf("Digite a população da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da Carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1 (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos da Carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo da densidade populacional e PIB per capita para Carta 1
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // Cálculo do super poder da Carta 1 (soma dos atributos + outros)
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);

    // Dados da Carta 2
    char estado2;
    char codigo2[5];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // Entrada da Carta 2
    printf("\nDigite uma letra de (A-H) para o estado da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01) para a Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a população da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da Carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2 (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional e PIB per capita para Carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Cálculo do super poder da Carta 2
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);

    // Mostrar cartas com os valores calculados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per Capita: %.2f\nSuper poder: %.2f\n",
           estado1, codigo1, nome1, populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, pib_per_capita1, super_poder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per Capita: %.2f\nSuper poder: %.2f\n",
           estado2, codigo2, nome2, populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, pib_per_capita2, super_poder2);

    // Escolha fixa do atributo para comparar:
    char atributoComparar = 'P';  // 'P' para população, pode mudar para A, B, C, D, E, F conforme necessidade

    printf("\n--- Resultado da comparação (Atributo: ");

    // Exibir nome do atributo na saída
    if (atributoComparar == 'P') printf("População) ---\n");
    else if (atributoComparar == 'A') printf("Área) ---\n");
    else if (atributoComparar == 'B') printf("PIB) ---\n");
    else if (atributoComparar == 'C') printf("Pontos turísticos) ---\n");
    else if (atributoComparar == 'D') printf("Densidade populacional) ---\n");
    else if (atributoComparar == 'E') printf("PIB per capita) ---\n");
    else if (atributoComparar == 'F') printf("Super poder) ---\n");
    else printf("Atributo desconhecido) ---\n");

    // Comparação e resultado com valores exibidos
    if (atributoComparar == 'P') {
        printf("Carta 1 - %s (%c): %d\n", nome1, estado1, populacao1);
        printf("Carta 2 - %s (%c): %d\n", nome2, estado2, populacao2);
        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (populacao2 > populacao1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");

    } else if (atributoComparar == 'A') {
        printf("Carta 1 - %s (%c): %.2f km²\n", nome1, estado1, area1);
        printf("Carta 2 - %s (%c): %.2f km²\n", nome2, estado2, area2);
        if (area1 > area2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (area2 > area1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");

    } else if (atributoComparar == 'B') {
        printf("Carta 1 - %s (%c): %.2f bilhões\n", nome1, estado1, pib1);
        printf("Carta 2 - %s (%c): %.2f bilhões\n", nome2, estado2, pib2);
        if (pib1 > pib2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (pib2 > pib1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");

    } else if (atributoComparar == 'C') {
        printf("Carta 1 - %s (%c): %d pontos turísticos\n", nome1, estado1, pontos_turisticos1);
        printf("Carta 2 - %s (%c): %d pontos turísticos\n", nome2, estado2, pontos_turisticos2);
        if (pontos_turisticos1 > pontos_turisticos2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (pontos_turisticos2 > pontos_turisticos1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");

    } else if (atributoComparar == 'D') {
        printf("Carta 1 - %s (%c): %.2f hab/km²\n", nome1, estado1, densidade_populacional1);
        printf("Carta 2 - %s (%c): %.2f hab/km²\n", nome2, estado2, densidade_populacional2);
        // Para densidade populacional, menor vence
        if (densidade_populacional1 < densidade_populacional2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (densidade_populacional2 < densidade_populacional1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");

    } else if (atributoComparar == 'E') {
        printf("Carta 1 - %s (%c): %.2f\n", nome1, estado1, pib_per_capita1);
        printf("Carta 2 - %s (%c): %.2f\n", nome2, estado2, pib_per_capita2);
        if (pib_per_capita1 > pib_per_capita2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (pib_per_capita2 > pib_per_capita1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");

    } else if (atributoComparar == 'F') {
        printf("Carta 1 - %s (%c): %.2f\n", nome1, estado1, super_poder1);
        printf("Carta 2 - %s (%c): %.2f\n", nome2, estado2, super_poder2);
        if (super_poder1 > super_poder2)
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        else if (super_poder2 > super_poder1)
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        else
            printf("Resultado: Empate!\n");

    } else {
        printf("Atributo inválido para comparação.\n");
    }

    return 0;
}