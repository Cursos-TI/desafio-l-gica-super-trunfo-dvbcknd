#include <stdio.h>

int main() {
    char estado1, estado2, cidade1[20], cidade2[20], codigo1[10], codigo2[10];
    int populacao1 = 0, populacao2 = 0; 
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
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

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

    int menu = -1, opcao;


    while (menu != 0){
        printf("\nAgora escolha qual dos atributos das cidades você quer comparar (opção fora do menu o programa será encerrado.)\n");
        printf("\n Opção 1: População\n Opção 2: Área\n Opção 3: PIB\n Opção 4: Densidade Populacional\n Opção 5: PIB Per Capita\n Opção 6: Ver todos os atributos das duas cartas\n Opção 0: Encerrar o programa\n");
        printf("Digite aqui a opção desejada: ");
        scanf("%d", &opcao);

        if (opcao == 1){
            printf("\n\nA opção Escolhida foi População:\n");
            if ( populacao1 > populacao2 ){
                printf("O vencedor é a carta 01, pois a populção dela é maior\n\n");
            } else {
                printf("O vencedor é a carta 02, pois a populção dela é maior\n\n");
            }
            
        } else if (opcao == 2 ){
            printf("\n\nA opção Escolhida foi Área:\n");
            if ( areakm1 > areakm2){
                printf("O vencedor é a carta 01, pois a Área dela é maior\n\n");
            } else {
                printf("O vencedor é a carta 02, pois a Área dela é maior\n\n");
            }            

        } else if (opcao == 3 ){
            printf("\n\nA opção Escolhida foi PIB:\n");
            if ( pib1 > pib2 ){
                printf("O vencedor é a carta 01, pois o PIB dela é maior\n\n");
            } else {
                printf("O vencedor é a carta 02, pois o PIB dela é maior\n\n");
            }

        } else if (opcao == 4 ){
            printf("\n\nA opção Escolhida foi Densidade Populacional:\n");
            if ( densidade1 < densidade2){
                printf("O vencedor é a carta 01, pois a Densidade dela é menor\n\n");
            } else {
                printf("O vencedor é a carta 02, pois a Densidade dela é menor\n\n");
            }

        } else if (opcao == 5 ){
            printf("\n\nA opção Escolhida foi PIB Per Capita:\n");
            if ( pibPercapita1 > pibPercapita2 ){
                printf("O vencedor é a carta 01, pois o PIB Per Capita dela é maior\n\n");
            } else {
                printf("O vencedor é a carta 02, pois o PIB Per Capita dela é maior\n\n");
            }

        } else if (opcao == 6){
            int exibicao;
            printf("\n\nQual carta você quer ver?\n Para a Carta 01 digite: 1\n Para a carta 02 digite 2\n\n");
            printf("Digite aqui a opção: ");
            scanf("%d", &exibicao);            
            
            if(exibicao == 1){
                printf("\n\nConfira abaixo os atributos da carta 01\n\n");

                printf("Carta 01:\n");
                printf("Estado:%c\n", estado1);
                printf("Código:%s\n", codigo1);
                printf("Nome da cidade:%s\n", cidade1);
                printf("População:%d\n", populacao1);
                printf("Área:%.2fkm²\n", areakm1);
                printf("PIB:%.1f bilhões de reais\n", pib1);
                printf("Número de pontos turísticos:%d\n", pontosturisticos1);
                printf("Densidade Poulaciona:%.2f\n", densidade1);
                printf("PIB Percapita:%.2f\n", pibPercapita1);
                printf("\n\n");

            } else if(exibicao == 2){
                printf("\n\nConfira abaixo os atributos da carta 02\n\n");

                printf("Carta 02:\n");
                printf("Estado:%c\n", estado2);
                printf("Código:%s\n", codigo2);
                printf("Nome da cidade:%s\n", cidade2);
                printf("População:%d\n", populacao2);
                printf("Área:%.2fkm²\n", areakm2);
                printf("PIB:%.1f bilhões de reais\n", pib2);
                printf("Número de pontos turísticos:%d\n", pontosturisticos2);
                printf("Densidade Poulaciona:%.2f\n", densidade2);
                printf("PIB Percapita:%.2f\n", pibPercapita2);
                printf("\n\n");
            } else {
                printf("Você não digitou uma opção válida, tente novamente.\n\n");
            }

        }else if (opcao == 0){
            printf("Você escolheu sair, o programa foi encerrado!\n\n");
            menu = 0;

        } else{
            printf("Você não digitou uma opção válida e o programa será encerrado!\n\n");
            menu = 0;
        }
    }
    
       return 0;
}