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

printf("===Super Trunfo===\n\n");

    int menuloop = 1;

     while (menuloop == 1) {


        printf("Carta 1: %s\n", nome1);
    printf("Carta 2: %s\n\n", nome2);


    printf("Escolha uma carta para comparar: \n");
    printf("1 - populacao\n");
    printf("2 - area\n");
    printf("3 - pib\n");
    printf("4 - pontos turisticos\n");
    scanf("%d", &opcao);

    printf(" ==== Resultado ===\n");

    // Comparacões 

    if(opcao == 1){

    if (populacao1 > populacao2) {
    printf("%s Venceu!\n", nome1);
    strcpy(cidadeVencedora, nome1);
    }

    else if (populacao2 > populacao1) {
    printf("%s Venceu!\n", nome2);
    strcpy(cidadeVencedora, nome2);
    }

    }

    if (opcao == 2){

        if(area1 > area2) {
        printf("%s Venceu!\n", nome1);
        }

        else if (area2 > area1) {
        printf("%s Venceu!\n", nome2);
        }
    }

    if (opcao == 3){

        if (pib1 > pib2) {
            printf("%s Venceu!\n", nome1);
        }
        

        else if (pib2 > pib1) {
            printf("%s Venceu!\n", nome2);
        }
    } 

    if (opcao == 4){
        if (pontos1 > pontos2) {
        printf("%s Venceu!\n", nome1);
        }
        else if (pontos2 > pontos1) {
        printf("%s Venceu!\n", nome2);
        }
    }
        }



// Resultado final

printf("A cidade vencedora é: %s\n", cidadeVencedora);

  return 0;

}
    


    