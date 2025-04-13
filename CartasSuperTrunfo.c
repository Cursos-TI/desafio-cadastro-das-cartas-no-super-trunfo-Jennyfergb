#include <stdio.h>

int main(){
    char carta1[20], carta2[20];
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    //printf Carta1

    printf("Digite a inicial do estado: ");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    //printf imprimir resultados carta1

    printf("Estado: %c\n", estado1);
    printf("Carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("Pib: %f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);

    //printf Carta2
    
    printf("Digite a inicial do estado: ");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o produto interno bruto da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    //printf imprimir resultados carta2

    printf("Estado: %c\n", estado2);
    printf("Carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("Pib: %f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);

}
