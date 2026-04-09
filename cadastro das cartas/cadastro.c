#include <stdio.h>

int main(){

    // carta 1 
    char estadoA = 'A';
    char codigoA[] = "A01";
    char nomedacidadeA[20] = "São Paulo";
    int populacaoA = 12325000;
    float areaA = 1521.11;
    float pibA = 699.28;
    int pontos_turisticosA = 50;

    float Densidade_populacionalA = populacaoA / areaA;
    float Pib_per_capitaA = pibA / populacaoA;

    printf("Carta 1 - São Paulo, SP\n");
    printf("Estado: %c\n", estadoA);
    printf("Codigo: %s\n", codigoA);
    printf("Populacao: %d\n", populacaoA);
    printf("%.2f km²\n", areaA);
    printf("PIB %.2f\n", pibA);
    printf("Pontos turisticos %d\n", pontos_turisticosA);   
    printf("Densidade populacional %.2f\n", Densidade_populacionalA);
    printf("PIB per capta %.6f\n\n", Pib_per_capitaA);

    // - Carta 2 -
    char estadoB = 'B';
    char codigoB[] = "B02";
    char nomedacidadeB[20] = "Rio de janeiro";
    int populacaoB = 6748000;
    float areaB = 1200.25;
    float PibB = 300.50;
    int pontos_turisticosB = 30;
    float densidade_populacionalB = populacaoB / areaB;
    float pib_per_captaB = PibB / populacaoB;

        printf("Carta 2 = Rio de janeiro, RJ\n");
        printf("Estado: %c\n", estadoB);
        printf("Codigo: %s\n", codigoB);
        printf("Populacao: %d\n", populacaoB);
        printf("%.2f km²\n", areaB);
        printf("PIB %.2f\n", PibB);
        printf("Pontos turisticos %d\n", pontos_turisticosB);
        printf("Densidade populacional %2.f\n", densidade_populacionalB);
        printf("PIB per capta %.6f\n\n", pib_per_captaB);

    

    return 0;
}