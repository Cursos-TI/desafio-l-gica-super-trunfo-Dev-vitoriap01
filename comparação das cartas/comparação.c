#include <stdio.h>
#include <string.h>

int main() {

    // === Carta 1 ===
    char nome1[] = "Sao Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;

    // === Carta 2 ===
    char nome2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos2 = 30;

    char cidadeVencedora[50] = "";
    int opcao;
    int menuloop = 1;

    printf("=== SUPER TRUNFO ===\n\n");

    while (menuloop == 1) {

        printf("\nCarta 1: %s\n", nome1);
        printf("Carta 2: %s\n\n", nome2);

        printf("Escolha um atributo: \n");
        printf("1 - populacao\n");
        printf("2 - area\n");
        printf("3 - pib\n");
        printf("4 - pontos turisticos\n");
        printf("0 - sair\n");
        scanf("%d", &opcao);

        printf("\n==== RESULTADO ====\n");

        switch (opcao) {

            case 1: {
                int pontosCarta1 = 0;
                int pontosCarta2 = 0;

                printf("Comparando Populacao + PIB\n");
                printf("%s - Populacao: %d | PIB: %.2f\n", nome1, populacao1, pib1);
                printf("%s - Populacao: %d | PIB: %.2f\n", nome2, populacao2, pib2);

                // Comparacao da populacao
                if (populacao1 > populacao2) {
                    pontosCarta1++;
                } else if (populacao2 > populacao1) {
                    pontosCarta2++;
                }

                // Comparacao do PIB
                if (pib1 > pib2) {
                    pontosCarta1++;
                } else if (pib2 > pib1) {
                    pontosCarta2++;
                }

                printf("%s fez %d ponto(s)\n", nome1, pontosCarta1);
                printf("%s fez %d ponto(s)\n", nome2, pontosCarta2);

                if (pontosCarta1 > pontosCarta2) {
                    strcpy(cidadeVencedora, nome1);
                } else if (pontosCarta2 > pontosCarta1) {
                    strcpy(cidadeVencedora, nome2);
                } else {
                    strcpy(cidadeVencedora, "Empate");
                }
                break;
            }

            case 2: {
                int pontosCarta1 = 0;
                int pontosCarta2 = 0;

                printf("Comparando Area + Pontos Turisticos\n");
                printf("%s - Area: %.2f | Pontos turisticos: %d\n", nome1, area1, pontos1);
                printf("%s - Area: %.2f | Pontos turisticos: %d\n", nome2, area2, pontos2);

                // Comparacao da area
                if (area1 > area2) {
                    pontosCarta1++;
                } else if (area2 > area1) {
                    pontosCarta2++;
                }

                // Comparacao dos pontos turisticos
                if (pontos1 > pontos2) {
                    pontosCarta1++;
                } else if (pontos2 > pontos1) {
                    pontosCarta2++;
                }

                printf("%s fez %d ponto(s)\n", nome1, pontosCarta1);
                printf("%s fez %d ponto(s)\n", nome2, pontosCarta2);

                if (pontosCarta1 > pontosCarta2) {
                    strcpy(cidadeVencedora, nome1);
                } else if (pontosCarta2 > pontosCarta1) {
                    strcpy(cidadeVencedora, nome2);
                } else {
                    strcpy(cidadeVencedora, "Empate");
                }
                break;
            }

            case 3: {
                int pontosCarta1 = 0;
                int pontosCarta2 = 0;

                printf("Comparando PIB + Area\n");
                printf("%s - PIB: %.2f | Area: %.2f\n", nome1, pib1, area1);
                printf("%s - PIB: %.2f | Area: %.2f\n", nome2, pib2, area2);

                // Comparacao do PIB
                if (pib1 > pib2) {
                    pontosCarta1++;
                } else if (pib2 > pib1) {
                    pontosCarta2++;
                }

                // Comparacao da area
                if (area1 > area2) {
                    pontosCarta1++;
                } else if (area2 > area1) {
                    pontosCarta2++;
                }

                printf("%s fez %d ponto(s)\n", nome1, pontosCarta1);
                printf("%s fez %d ponto(s)\n", nome2, pontosCarta2);

                if (pontosCarta1 > pontosCarta2) {
                    strcpy(cidadeVencedora, nome1);
                } else if (pontosCarta2 > pontosCarta1) {
                    strcpy(cidadeVencedora, nome2);
                } else {
                    strcpy(cidadeVencedora, "Empate");
                }
                break;
            }

            case 4: {
                int pontosCarta1 = 0;
                int pontosCarta2 = 0;

                printf("Comparando Pontos Turisticos + Populacao\n");
                printf("%s - Pontos turisticos: %d | Populacao: %d\n", nome1, pontos1, populacao1);
                printf("%s - Pontos turisticos: %d | Populacao: %d\n", nome2, pontos2, populacao2);

                // Comparacao dos pontos turisticos
                if (pontos1 > pontos2) {
                    pontosCarta1++;
                } else if (pontos2 > pontos1) {
                    pontosCarta2++;
                }

                // Comparacao da populacao
                if (populacao1 > populacao2) {
                    pontosCarta1++;
                } else if (populacao2 > populacao1) {
                    pontosCarta2++;
                }

                printf("%s fez %d ponto(s)\n", nome1, pontosCarta1);
                printf("%s fez %d ponto(s)\n", nome2, pontosCarta2);

                if (pontosCarta1 > pontosCarta2) {
                    strcpy(cidadeVencedora, nome1);
                } else if (pontosCarta2 > pontosCarta1) {
                    strcpy(cidadeVencedora, nome2);
                } else {
                    strcpy(cidadeVencedora, "Empate");
                }
                break;
            }

            case 0:
                menuloop = 0;
                printf("Saindo do jogo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

        if (opcao >= 1 && opcao <= 4) {
            printf("A cidade vencedora e: %s\n", cidadeVencedora);
        }
    }

    return 0;
}