#include <stdio.h>

int main() {
    char estado1, estado2, cidade1[20], cidade2[20], codigo1[4], codigo2[4];
    unsigned long int populacao1 = 0, populacao2 = 0; // Alterado para unsigned long int
    int pontosturisticos1 = 0, pontosturisticos2 = 0;
    float areakm1 = 0, areakm2 = 0, pib1 = 0, pib2 = 0;
    float densidade1, densidade2, pibPercapita1, pibPercapita2;
    float superPoder1, superPoder2;
    int pontosCarta1 = 0, pontosCarta2 = 0;

    printf("\n\n-----JOGO SUPER TRUNFO-----\n");
    printf("---------------------------\n\n");

    printf("A seguir digite os dados da primeira carta\n\n");
    printf("Digite o Estado em uma letra de 'A' a 'H': ");
    scanf(" %c", &estado1);

    printf("Digite o número da carta, de 01 a 04, junto com a letra do estado escolhida (EX: A01, B03): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade (em apenas um nome): ");
    scanf("%s", cidade1);

    printf("Digite o número da população em quantidade de habitantes: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em KM: ");
    scanf("%f", &areakm1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos da cidade: ");
    scanf("%d", &pontosturisticos1);

    printf("\n--------------------------------------------------------\n\n");

    printf("Agora digite os dados sa segunda cidade.\n\n");
    printf("Digite o Estado em uma letra de 'A' a 'H': ");
    scanf(" %c", &estado2);

    printf("Digite o número da carta, de 01 a 04, junto com a letra do estado escolhida (EX: A01, B03): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade (em apenas um nome): ");
    scanf("%s", cidade2);

    printf("Digite o número da população em quantidade de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em KM: ");
    scanf("%f", &areakm2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos da cidade: ");
    scanf("%d", &pontosturisticos2);

    densidade1 = (float) populacao1 / areakm1;
    pibPercapita1 = (float) (pib1 * 1000000000) / populacao1;

    densidade2 = (float) populacao2 / areakm2;
    pibPercapita2  = (float) (pib2 * 1000000000) / populacao2;

    // Cálculo do Super Poder
    superPoder1 = (float)populacao1 + areakm1 + pib1 + pontosturisticos1 + pibPercapita1 + (1 / densidade1);
    superPoder2 = (float)populacao2 + areakm2 + pib2 + pontosturisticos2 + pibPercapita2 + (1 / densidade2);

    printf("\n--------------------------------------------------------\n\n");

    printf("Carta 01:\n");
    printf("Estado:%c\n", estado1);
    printf("Código:%s\n", codigo1);
    printf("Nome da cidade:%s\n", cidade1);
    printf("População:%lu\n", populacao1);
    printf("Área:%.2fkm²\n", areakm1);
    printf("PIB:%.1f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos:%d\n", pontosturisticos1);
    printf("Densidade Poulaciona:%.2f\n", densidade1);
    printf("PIB Percapita:%.2f\n", pibPercapita1);

    printf("\n--------------------------------------------------------\n\n");

    printf("Carta 02:\n");
    printf("Estado:%c\n", estado2);
    printf("Código:%s\n", codigo2);
    printf("Nome da cidade:%s\n", cidade2);
    printf("População:%lu\n", populacao2);
    printf("Área:%.2fkm²\n", areakm2);
    printf("PIB:%.1f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos:%d\n", pontosturisticos2);
    printf("Densidade Poulaciona:%.2f\n", densidade2);
    printf("PIB Percapita:%.2f\n", pibPercapita2);

    // Comparações
    printf("\n--------------------------------------------------------\n");
    printf("Comparação de Cartas:\n\n");

    // População
    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu\n");
        pontosCarta1++;
    } else if (populacao2 > populacao1) {
        printf("População: Carta 2 venceu\n");
        pontosCarta2++;
    } else {
        printf("População: Empate\n");
    }

    // Área
    if (areakm1 > areakm2) {
        printf("Área: Carta 1 venceu\n");
        pontosCarta1++;
    } else if (areakm2 > areakm1) {
        printf("Área: Carta 2 venceu\n");
        pontosCarta2++;
    } else {
        printf("Área: Empate\n");
    }

    // PIB
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu\n");
        pontosCarta1++;
    } else if (pib2 > pib1) {
        printf("PIB: Carta 2 venceu\n");
        pontosCarta2++;
    } else {
        printf("PIB: Empate\n");
    }

    // Pontos Turísticos
    if (pontosturisticos1 > pontosturisticos2) {
        printf("Pontos Turísticos: Carta 1 venceu\n");
        pontosCarta1++;
    } else if (pontosturisticos2 > pontosturisticos1) {
        printf("Pontos Turísticos: Carta 2 venceu\n");
        pontosCarta2++;
    } else {
        printf("Pontos Turísticos: Empate\n");
    }

    // Densidade Populacional (menor vence)
    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu\n");
        pontosCarta1++;
    } else if (densidade2 < densidade1) {
        printf("Densidade Populacional: Carta 2 venceu\n");
        pontosCarta2++;
    } else {
        printf("Densidade Populacional: Empate\n");
    }

    // PIB per Capita
    if (pibPercapita1 > pibPercapita2) {
        printf("PIB per Capita: Carta 1 venceu\n");
        pontosCarta1++;
    } else if (pibPercapita2 > pibPercapita1) {
        printf("PIB per Capita: Carta 2 venceu\n");
        pontosCarta2++;
    } else {
        printf("PIB per Capita: Empate\n");
    }

    // Super Poder
    if (superPoder1 > superPoder2) {
        printf("Super Poder: Carta 1 venceu\n");
        pontosCarta1++;
    } else if (superPoder2 > superPoder1) {
        printf("Super Poder: Carta 2 venceu\n");
        pontosCarta2++;
    } else {
        printf("Super Poder: Empate\n");
    }

    // Placar final
    printf("\nPlacar Final:\n");
    printf("Carta 1: %d pontos | Carta 2: %d pontos\n", pontosCarta1, pontosCarta2);

    if (pontosCarta1 > pontosCarta2) {
        printf("Resultado: Carta 1 é a vencedora!\n\n");
    } else if (pontosCarta2 > pontosCarta1) {
        printf("Resultado: Carta 2 é a vencedora!\n\n");
    } else {
        printf("Resultado: Empate!\n\n");
    }


    return 0;
}
