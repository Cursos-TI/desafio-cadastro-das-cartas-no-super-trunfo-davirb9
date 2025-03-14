#include <stdio.h>

int main(){
    char estado1[6];
    char cod1[3];
    char cidade1[20];
    int pop1;
    float area1;
    float pib1;
    int ponto1;
    char estado2[6];
    char cod2[3];
    char cidade2[20];
    int pop2;
    float area2;
    float pib2;
    int ponto2;

    // Cadastro da carta 1
    printf("Carta 1\n");

    printf("Estado carta 1: \n");
    scanf("%s", estado1);
    
    printf("Código carta 1: \n");
    scanf("%s", cod1);

    printf("Nome da cidade carta 1: \n");
    scanf("%s", cidade1);

    printf("População carta 1: \n");
    scanf("%d", &pop1);

    printf("Area carta 1: \n");
    scanf("%f", &area1);

    printf("PIB carta 1: \n");
    scanf("%f", &pib1);

    printf("Números de pontos turisticos carta 1:  \n");
    scanf("%d", &ponto1);
    




    printf("\n");
    printf("\n");
   


    // Cadastro da carta 2
    printf("Carta 2\n");

    printf("Estado carta 2: \n");
    scanf("%s", estado2);
    
    printf("Código carta 2: \n");
    scanf("%s", cod2);

    printf("Nome da cidade carta 2: \n");
    scanf("%s", cidade2);

    printf("População carta 2: \n");
    scanf("%d", &pop2);

    printf("Area carta 2: \n");
    scanf("%f", &area2);

    printf("PIB carta 2: \n");
    scanf("%f", &pib2);

    printf("Números de pontos turisticos carta 2:  \n");
    scanf("%d", &ponto2);

    printf("\n");
    printf("\n");

    // Dados da carta 1
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", cod1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", pop1);
    printf("Área: %f km2\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d", ponto1);

    printf("\n");
    printf("\n");

    // Dados da carta 2
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", cod2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", pop2);
    printf("Área: %f km2\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d", ponto2);

    return 0;
    

}
