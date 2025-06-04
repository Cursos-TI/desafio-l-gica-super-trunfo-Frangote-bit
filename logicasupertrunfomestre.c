#include <stdio.h>

int main() {
    // --- Dados da Carta 1 ---
    char estado1, codigo1[5], nome1[50];
    int populacao1, pontos1;
    float area1, pib1, densidade1, per_capita1;

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
    densidade1 = populacao1 / area1;
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    per_capita1 = pib1 / populacao1;
    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos1);

    // --- Dados da Carta 2 ---
    char estado2, codigo2[5], nome2[50];
    int populacao2, pontos2;
    float area2, pib2, densidade2, per_capita2;

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
    densidade2 = populacao2 / area2;
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    per_capita2 = pib2 / populacao2;
    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontos2);

    // --- Menu de seleção ---
    int escolha1, escolha2;
    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica (menor vence)\n6 - PIB per capita\n");
    scanf("%d", &escolha1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    if (escolha1 != 1) printf("1 - População\n");
    if (escolha1 != 2) printf("2 - Área\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Pontos turísticos\n");
    if (escolha1 != 5) printf("5 - Densidade demográfica (menor vence)\n");
    if (escolha1 != 6) printf("6 - PIB per capita\n");
    scanf("%d", &escolha2);

    // --- Nomes dos atributos ---
    char atributo1[40], atributo2[40];
    float valor1_c1 = 0, valor1_c2 = 0, valor2_c1 = 0, valor2_c2 = 0;

    // Processa escolha1
    switch (escolha1) {
        case 1:
            valor1_c1 = populacao1; valor1_c2 = populacao2;
            atributo1[0]='P'; atributo1[1]='o'; atributo1[2]='p'; atributo1[3]='u'; atributo1[4]='l'; atributo1[5]='a'; atributo1[6]='c'; atributo1[7]='ã'; atributo1[8]='o'; atributo1[9]='\0';
            break;
        case 2:
            valor1_c1 = area1; valor1_c2 = area2;
            atributo1[0]='Á'; atributo1[1]='r'; atributo1[2]='e'; atributo1[3]='a'; atributo1[4]='\0';
            break;
        case 3:
            valor1_c1 = pib1; valor1_c2 = pib2;
            atributo1[0]='P'; atributo1[1]='I'; atributo1[2]='B'; atributo1[3]='\0';
            break;
        case 4:
            valor1_c1 = pontos1; valor1_c2 = pontos2;
            atributo1[0]='P'; atributo1[1]='o'; atributo1[2]='n'; atributo1[3]='t'; atributo1[4]='o'; atributo1[5]='s'; atributo1[6]='\0';
            break;
        case 5:
            valor1_c1 = -densidade1; valor1_c2 = -densidade2;  // menor vence
            atributo1[0]='D'; atributo1[1]='e'; atributo1[2]='n'; atributo1[3]='s'; atributo1[4]='i'; atributo1[5]='d'; atributo1[6]='a'; atributo1[7]='d'; atributo1[8]='e'; atributo1[9]='\0';
            break;
        case 6:
            valor1_c1 = per_capita1; valor1_c2 = per_capita2;
            atributo1[0]='P'; atributo1[1]='e'; atributo1[2]='r'; atributo1[3]=' '; atributo1[4]='c'; atributo1[5]='a'; atributo1[6]='p'; atributo1[7]='i'; atributo1[8]='t'; atributo1[9]='a'; atributo1[10]='\0';
            break;
    }

    // Processa escolha2
    switch (escolha2) {
        case 1:
            valor2_c1 = populacao1; valor2_c2 = populacao2;
            atributo2[0]='P'; atributo2[1]='o'; atributo2[2]='p'; atributo2[3]='u'; atributo2[4]='l'; atributo2[5]='a'; atributo2[6]='c'; atributo2[7]='ã'; atributo2[8]='o'; atributo2[9]='\0';
            break;
        case 2:
            valor2_c1 = area1; valor2_c2 = area2;
            atributo2[0]='Á'; atributo2[1]='r'; atributo2[2]='e'; atributo2[3]='a'; atributo2[4]='\0';
            break;
        case 3:
            valor2_c1 = pib1; valor2_c2 = pib2;
            atributo2[0]='P'; atributo2[1]='I'; atributo2[2]='B'; atributo2[3]='\0';
            break;
        case 4:
            valor2_c1 = pontos1; valor2_c2 = pontos2;
            atributo2[0]='P'; atributo2[1]='o'; atributo2[2]='n'; atributo2[3]='t'; atributo2[4]='o'; atributo2[5]='s'; atributo2[6]='\0';
            break;
        case 5:
            valor2_c1 = -densidade1; valor2_c2 = -densidade2;
            atributo2[0]='D'; atributo2[1]='e'; atributo2[2]='n'; atributo2[3]='s'; atributo2[4]='i'; atributo2[5]='d'; atributo2[6]='a'; atributo2[7]='d'; atributo2[8]='e'; atributo2[9]='\0';
            break;
        case 6:
            valor2_c1 = per_capita1; valor2_c2 = per_capita2;
            atributo2[0]='P'; atributo2[1]='e'; atributo2[2]='r'; atributo2[3]=' '; atributo2[4]='c'; atributo2[5]='a'; atributo2[6]='p'; atributo2[7]='i'; atributo2[8]='t'; atributo2[9]='a'; atributo2[10]='\0';
            break;
    }

    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\n--- Resultado da Comparação ---\n");
    printf("Cidade 1: %s\n", nome1);
    printf("Cidade 2: %s\n", nome2);
    printf("Atributo 1 (%s): %.2f x %.2f\n", atributo1, valor1_c1, valor1_c2);
    printf("Atributo 2 (%s): %.2f x %.2f\n", atributo2, valor2_c1, valor2_c2);
    printf("Soma total: %.2f x %.2f\n", soma1, soma2);

    if (soma1 > soma2)
        printf("Vencedora: %s\n", nome1);
    else if (soma2 > soma1)
        printf("Vencedora: %s\n", nome2);
    else
        printf("Empate!\n");

    return 0;
}