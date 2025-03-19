#include <stdio.h>

int main(){
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[50], cidade2[50];
    int populacao1, populacao2, ponto1, ponto2;
    float area1, area2, pib1, pib2;
    float densidade1, capita1, densidade2, capita2;

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
    capita1 = (float) ( pib1 * 1000000000) / populacao1;
    capita2 = (float) ( pib2 * 1000000000) / populacao2;

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
    printf("PIB per capita: %.2f reais\n", capita1);

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
    printf("PIB per capita: %.2f reais\n", capita2);

    return 0;
    

}
