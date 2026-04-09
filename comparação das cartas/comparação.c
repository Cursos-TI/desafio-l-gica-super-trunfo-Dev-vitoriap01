#include <stdio.h>
#include <string.h>


int main() {

// === Carta 1 ===
char nome1[] = "São paulo";
int populacao1 = 12325000;
float area1 = 1521.11;
float pib1 = 699.28;
int pontos1 = 50;

// === Carta 2 ===
char nome2[] = "Rio de janeiro";
int populacao2 = 6748000;
float area2 = 1200.25;
float pib2 = 300.50;
int pontos2 = 30;

char cidadeVencedora[50];

int opcao;
int menuloop = 1;

printf("===Super Trunfo===\n\n");    

while (menuloop == 1) {

        printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n\n", nome2);


    printf("Escolha um : \n");
    printf("1 - populacao\n");
    printf("2 - area\n");
    printf("3 - pib\n");
    printf("4 - pontos turisticos\n");
    scanf("%d", &opcao);

    printf(" ==== Resultado ===\n");

// Comparacões 

    printf(" ==== Resultado ===\n");

switch (opcao) {
    case 1:
        printf("%s: %d\n", nome1, populacao1);
        printf("%s: %d\n", nome2, populacao2);

        if (populacao1 > populacao2) {
            strcpy(cidadeVencedora, nome1);
        } else if (populacao2 > populacao1) {
            strcpy(cidadeVencedora, nome2);
        } else {
            strcpy(cidadeVencedora, "Empate");
        }
        break;

    case 2:
        printf("%s: %.2f\n", nome1, area1);
        printf("%s: %.2f\n", nome2, area2);

        if (area1 > area2) {
            strcpy(cidadeVencedora, nome1);
        } else if (area2 > area1) {
            strcpy(cidadeVencedora, nome2);
        } else {
            strcpy(cidadeVencedora, "Empate");
        }
        break;

    case 3:
        printf("%s: %.2f\n", nome1, pib1);
        printf("%s: %.2f\n", nome2, pib2);

        if (pib1 > pib2) {
            strcpy(cidadeVencedora, nome1);
        } else if (pib2 > pib1) {
            strcpy(cidadeVencedora, nome2);
        } else {
            strcpy(cidadeVencedora, "Empate");
        }
        break;

    case 4:
        printf("%s: %d\n", nome1, pontos1);
        printf("%s: %d\n", nome2, pontos2);

        if (pontos1 > pontos2) {
            strcpy(cidadeVencedora, nome1);
        } else if (pontos2 > pontos1) {
            strcpy(cidadeVencedora, nome2);
        } else {
            strcpy(cidadeVencedora, "Empate");
        }
        break;

    case 0:
        menuloop = 0;
        printf("Saindo do jogo...\n");
        break;

    default:
        printf("Opcao invalida!\n");
}

    }

    return 0;
}





        

    





