#include <stdio.h>

#include <stdio.h>

int main() {
    char Estado[50], Estado2[50];
    char CodigoCarta[50], CodigoCarta2[50];
    char LetraCarta, LetraCarta2;
    int NumeroCarta, NumeroCarta2;
    char NomeCidade[50], NomeCidade2[50];
    int Populacao, Populacao2;
    float Area, Area2;
    float PIB, PIB2;
    int PontosTuristicos, PontosTuristicos2;

    printf("Carta 1\n");
    printf("Estado -> ");
    scanf(" %s", Estado);
    printf("Letra da Carta -> ");
    scanf(" %c", &LetraCarta);
    printf("Número da Carta -> ");
    scanf("%d", &NumeroCarta);
    printf("Nome da Cidade -> ");
    scanf(" %s", NomeCidade);
    printf("Populacao -> ");
    scanf("%f", &Populacao);
    printf("Área -> ");
    scanf(" %f", &Area);
    printf("PIB -> ");
    scanf(" %f", &PIB);
    printf("Numero de Pontos Turísticos -> ");
    scanf("%d", &PontosTuristicos);

    float densidade_populacional;
    densidade_populacional = Populacao / Area;

    float PIB_percapita;
    PIB_percapita = PIB / Populacao;

    printf("Densidade Populacional -> %f", densidade_populacional);
    printf("PIB per capita -> %f", PIB_percapita);

    
    printf("Carta 2\n");
    printf("Estado -> ");
    scanf(" %s", Estado2);
    printf("Letra da Carta -> ");
    scanf(" %c", &LetraCarta2);
    printf("Número da Carta -> ");
    scanf("%d", &NumeroCarta2);
    printf("Nome da Cidade -> ");
    scanf(" %s", NomeCidade2);
    printf("Populacao -> ");
    scanf("%f", &Populacao2);
    printf("Área -> ");
    scanf(" %f", &Area2);
    printf("PIB -> ");
    scanf(" %f", &PIB2);
    printf("Numero de Pontos Turísticos -> ");
    scanf("%d", &PontosTuristicos2);
    
    float densidade_populacional2;
    densidade_populacional2 = Populacao2 / Area2;

    float PIB_percapita2;
    PIB_percapita2 = PIB / Populacao;

    printf("Densidade Populacional -> %f", densidade_populacional2);
    printf("PIB per capita -> %f", PIB_percapita2);
    

    if (Populacao > Populacao2) {
        printf("Populacao: \n");
        printf("Carta 1 Ganhou. \n");
    } else {
        printf("Populacao: \n");
        printf("Carta 2 Ganhou. \n");
    }

    if (Area > Area2) {
        printf("Area: \n");
        printf("Carta 1 Ganhou. \n");
    } else {
        printf("Area: \n");
        printf("Carta 2 Ganhou. \n");
    }

    if (PIB > PIB2) {
        printf("PIB: \n");
        printf("Carta 1 Ganhou. \n");
    } else {
        printf("PIB: \n");
        printf("Carta 2 Ganhou. \n");
    }
    
    if (PontosTuristicos > PontosTuristicos2) {
        printf("Pontos Turisticos: \n");
        printf("Carta 1 Ganhou. \n");
    } else {
        printf("Pontos Turisticos: \n");
        printf("Carta 2 Ganhou. \n");
    }

    if (densidade_populacional > densidade_populacional2) {
        printf("Densidade Populacional: \n");
        printf("Carta 1 Ganhou. \n");
    } else {
        printf("Densidade Populacional: \n");
        printf("Carta 2 Ganhou. \n");
    }

    if (PIB_percapita > PIB_percapita2) {
        printf("PIB per capita: \n");
        printf("Carta 1 Ganhou. \n");
    } else {
        printf("PIB per capita: \n");
        printf("Carta 2 Ganhou. \n");
    }

    return 0;
}
