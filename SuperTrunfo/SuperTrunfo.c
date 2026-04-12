#include <stdio.h>

int main(){
    // --------------------------------*** Váriáveis Carta 1 ***------------------------//
    char codCarta[5];      
    char estado[3];        
    char cidade[80];
    int populacao, pontosTuristicos;
    float area, pib;
    float DensidadeP1;
    float PIBCapita1;
    float SuperPoder1;
// --------------------------------*** Váriáveis Carta 2 ***------------------------//

    char codCarta2[5];      
    char estado2[3];        
    char cidade2[80];
    int populacao2, pontosTuristicos2;
    float area2, pib2;
    float DensidadeP2;
    float PIBCapita2;
    float SuperPoder2;
    /*------------------------------Carta 1--------------------------*/

    printf("Digite o nome da Cidade 1: \n");
    fgets(cidade, sizeof(cidade), stdin);

    printf("Digite o Código da Carta 1: \n");
    scanf(" %s", codCarta); 

    printf("Sigla do Estado 1: \n");
    scanf(" %s", estado);

    printf("Digite o número de habitantes 1: \n");
    scanf("%d", &populacao);

    printf("Digite a área em Km² da carta 1: \n");
    scanf("%f", &area);

    printf("Digite o valor do PIB da carta 1: \n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos da carta 1: \n");
    scanf("%d", &pontosTuristicos);

    DensidadeP1 = (float)(populacao / area);
    PIBCapita1 = (pib * 1000000000 / populacao);

    SuperPoder1 = (float)populacao + area + (pib * 1000000000) + PIBCapita1 + (float)pontosTuristicos + (1 / DensidadeP1);

    printf("\nCarta 1\n");
    printf("Código da carta: %s \n", codCarta);
    printf("Cidade: %s", cidade); 
    printf("Estado: %s \n", estado);
    printf("População: %d \n", populacao);
    printf("Área: %.4f Km²\n", area);
    printf("PIB: %.2fBilhões de Reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f HAB/Km²\n", DensidadeP1);
    printf("PIB per Capita: %.2f reais\n", PIBCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);
      /*------------------------------Carta 2--------------------------*/

    getchar();

    printf("\nDigite o nome da Cidade 2: \n");
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Digite o Código da Carta 2: \n");
    scanf(" %s", codCarta2); 

    printf("Sigla do Estado 2: \n");
    scanf(" %s", estado2);

    printf("Digite o número de habitantes 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em Km² da carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o valor do PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos da carta 2: \n");
    scanf("%d", &pontosTuristicos2);

    DensidadeP2 = (float)(populacao2 / area2);
    PIBCapita2 = (pib2 * 1000000000 / populacao2);

    SuperPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + PIBCapita2 + (float)pontosTuristicos2 + (1 / DensidadeP2);

    printf("\nCarta 2\n");
    printf("Código da carta: %s \n", codCarta2);
    printf("Cidade: %s", cidade2); 
    printf("Estado: %s \n", estado2);
    printf("População: %d \n", populacao2);
    printf("Área: %.4f Km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f HAB/Km²\n", DensidadeP2);
    printf("PIB per Capita: %.2f reais\n", PIBCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);


    getchar();

    //--------------------------*** Comparação das Cartas ***----------------------------//

    printf("\nComparação das Cartas:\n");
    printf("População: %d\n", populacao > populacao2);
    printf("Área: %d\n", area >area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos > pontosTuristicos2);
    printf("Densidade Populacional: %d\n", DensidadeP1 < DensidadeP2);
    printf("PIB per Capita: %d\n", PIBCapita1 > PIBCapita2);
    printf("Super Poder: %d\n", SuperPoder1 > SuperPoder2);
    

    return 0;

}
