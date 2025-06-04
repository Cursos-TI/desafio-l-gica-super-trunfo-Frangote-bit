#include <stdio.h>

int main() {

    // Carta 1
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

    // Entradas Carta 1
    printf("Digite uma letra de (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    densidade_populacional1 = populacao1 / area1;

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    pib_per_capita1 = pib1 / populacao1;

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade_populacional1);

    // Mostrar carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super poder da carta 1: %.2f\n", super_poder1);

    // Carta 2
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

    // Entradas Carta 2
    printf("\nDigite uma letra de (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    densidade_populacional2 = populacao2 / area2;

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    pib_per_capita2 = pib2 / populacao2;

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade_populacional2);

    // Mostrar carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super poder da carta 2: %.2f\n", super_poder2);

    // Escolha de atributo
    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super poder\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    printf("\n--- Resultado da Comparação ---\n");

    switch (opcao) {
        case 1:
            if (populacao1 > populacao2)
                printf("%s venceu!\n", nome1);
            else if (populacao2 > populacao1)
                printf("%s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 2:
            if (area1 > area2)
                printf("%s venceu!\n", nome1);
            else if (area2 > area1)
                printf("%s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 3:
            if (pib1 > pib2)
                printf("%s venceu!\n", nome1);
            else if (pib2 > pib1)
                printf("%s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 4:
            if (pontos_turisticos1 > pontos_turisticos2)
                printf("%s venceu!\n", nome1);
            else if (pontos_turisticos2 > pontos_turisticos1)
                printf("%s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 5:
            if (densidade_populacional1 < densidade_populacional2)
                printf("%s venceu!\n", nome1);
            else if (densidade_populacional2 < densidade_populacional1)
                printf("%s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 6:
            if (pib_per_capita1 > pib_per_capita2)
                printf("%s venceu!\n", nome1);
            else if (pib_per_capita2 > pib_per_capita1)
                printf("%s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 7:
            if (super_poder1 > super_poder2)
                printf("%s venceu!\n", nome1);
            else if (super_poder2 > super_poder1)
                printf("%s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}