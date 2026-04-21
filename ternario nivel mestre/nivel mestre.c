#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // gerar número aleatório
    srand(time(0));

    int ataque1 = rand() % 100 + 1;
    int ataque2 = rand() % 100 + 1;

    int defesa1 = rand() % 100 + 1;
    int defesa2 = rand() % 100 + 1;

    int recuo1 = rand() % 100 + 1;
    int recuo2 = rand() % 100 + 1;

    char atributo1, atributo2;

    int pontos1 = 0, pontos2 = 0;

    printf("===== Bem vindo ao jogo =====\n\n");

    // ===== PRIMEIRO ATRIBUTO =====
    printf("Escolha o primeiro Atributo:\n");
    printf("A - Ataque\nD - Defesa\nR - Recuo\n");
    scanf(" %c", &atributo1); // espaço antes do %c evita erro

    switch(atributo1) {
        case 'A':
        case 'a':
            printf("Ataque: Jogador1=%d x Jogador2=%d\n", ataque1, ataque2);
            if (ataque1 > ataque2) pontos1++;
            else if (ataque2 > ataque1) pontos2++;
            break;

        case 'D':
        case 'd':
            printf("Defesa: Jogador1=%d x Jogador2=%d\n", defesa1, defesa2);
            if (defesa1 > defesa2) pontos1++;
            else if (defesa2 > defesa1) pontos2++;
            break;

        case 'R':
        case 'r':
            printf("Recuo: Jogador1=%d x Jogador2=%d\n", recuo1, recuo2);
            if (recuo1 > recuo2) pontos1++;
            else if (recuo2 > recuo1) pontos2++;
            break;

        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // ===== SEGUNDO ATRIBUTO =====
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    printf("A - Ataque\nD - Defesa\nR - Recuo\n");
    scanf(" %c", &atributo2);

    if (atributo1 == atributo2 || atributo1 == atributo2 + 32 || atributo1 == atributo2 - 32) {
        printf("Você escolheu o mesmo atributo! Encerrando...\n");
        return 0;
    }

    switch(atributo2) {
        case 'A':
        case 'a':
            printf("Ataque: Jogador1=%d x Jogador2=%d\n", ataque1, ataque2);
            if (ataque1 > ataque2) pontos1++;
            else if (ataque2 > ataque1) pontos2++;
            break;

        case 'D':
        case 'd':
            printf("Defesa: Jogador1=%d x Jogador2=%d\n", defesa1, defesa2);
            if (defesa1 > defesa2) pontos1++;
            else if (defesa2 > defesa1) pontos2++;
            break;

        case 'R':
        case 'r':
            printf("Recuo: Jogador1=%d x Jogador2=%d\n", recuo1, recuo2);
            if (recuo1 > recuo2) pontos1++;
            else if (recuo2 > recuo1) pontos2++;
            break;

        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // ===== RESULTADO FINAL =====
    printf("\nPlacar final:\n");
    printf("Jogador1: %d pontos\n", pontos1);
    printf("Jogador2: %d pontos\n", pontos2);

    if (pontos1 > pontos2) {
        printf("Jogador 1 venceu!\n");
    } else if (pontos2 > pontos1) {
        printf("Jogador 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}