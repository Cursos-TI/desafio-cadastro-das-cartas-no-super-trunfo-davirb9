#include <stdio.h>

int main(){
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[50], cidade2[50];
    int populacao1, populacao2, ponto1, ponto2;
    float area1, area2, pib1, pib2;
    float densidade1, capita1, densidade2, capita2;
    float superPoder1, superPoder2;
    //Cadastro da carta 1

    printf("Cadastro da carta 1:\n");
    
    printf("Estado: \n");
    scanf(" %c", &estado1);
    
    printf("Código da Carta: \n");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);
    
    printf("Número de pontos turisticos:\n");
    scanf("%d", &ponto1);

    printf("\n");
    printf("\n");

    //cadastro da carta 2

    printf("Cadastro da carta 2:\n");
    
    printf("Estado: \n");
    scanf(" %c", &estado2);
    
    printf("Código da Carta: \n");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);
    
    printf("Número de pontos turisticos:\n");
    scanf("%d", &ponto2);

    printf("\n");
    printf("\n");

    
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    capita1 = (long double) ( pib1 * 1000000) / populacao1;
    capita2 = (long double) ( pib2 * 1000000) / populacao2;
    superPoder1 = (long double) (populacao1 + area1 + pib1 + ponto1 + capita1 + (1/densidade1));
    superPoder2 = (long double) (populacao2 + area2 + pib2 + ponto2 + capita2 + (1/densidade2));
    // Informações da carta 1

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", ponto1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: %.2lf reais\n", capita1);
    printf("Super Poder : %.2lf\n", superPoder1);

    printf("\n");
    printf("\n");

    // Informações da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", ponto2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: %.2lf reais\n", capita2);
    printf("Super Poder : %.2lf\n", superPoder2);
    
    printf("\n");
    printf("\n");

    printf("Se o resultado for 1 a carta 1 ganhou se o resultado for 0 a carta 2 ganhou, Acompanhe o resultado:\n");

    printf("\n");
    printf("\n");

    // variaveis de resultados 
    int resultadoPopulacao = populacao1 > populacao2;
    int resultadoArea = area1 > area2;
    int resultadoPib = pib1 > pib2;
    int resultadoPonto = ponto1 > ponto2;
    int resultadoDensidade = densidade1 < densidade2;
    int resultadoCapita = capita1 > capita2;
    int resultadoSuperPoder = superPoder1 > superPoder2;
    
    // imprimindo resultados
    printf("Resultado: \n");
    printf("População: %d\n", resultadoPopulacao);
    printf("Área: %d\n", resultadoArea);
    printf("Pib: %d\n", resultadoPib);
    printf("Pontos Turísticos: %d\n", resultadoPonto);
    printf("Densidade Populacional %d\n", resultadoDensidade);
    printf("PIB per Capita: %d\n", resultadoCapita);
    printf("Super Poder: %d\n", resultadoSuperPoder);
    

    return 0;
    

}
