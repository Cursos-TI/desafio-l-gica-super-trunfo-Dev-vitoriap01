#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int venceu(int jogador, int computador);
const char* nomeJogada(int jogada);
const char* motivoVitoria(int vencedor, int perdedor);
void mostrarMenu();

int main() {
    int jogador, computador;
    int vitoriasJogador = 0;
    int vitoriasComputador = 0;
    int empates = 0;
    char continuar = 'S';

    srand(time(0));

    while (continuar == 'S' || continuar == 's') {
        mostrarMenu();
        scanf("%d", &jogador);

        if (jogador < 1 || jogador > 5) {
            printf("\nOpcao invalida. Escolha um numero de 1 a 5.\n");
        } else {
            computador = rand() % 5 + 1;

            printf("\nJogador escolheu: %s\n", nomeJogada(jogador));
            printf("Computador escolheu: %s\n", nomeJogada(computador));

            if (jogador == computador) {
                printf("Resultado: Empate!\n");
                empates++;
            } else if (venceu(jogador, computador)) {
                printf("Resultado: Jogador venceu!\n");
                printf("Motivo: %s\n", motivoVitoria(jogador, computador));
                vitoriasJogador++;
            } else {
                printf("Resultado: Computador venceu!\n");
                printf("Motivo: %s\n", motivoVitoria(computador, jogador));
                vitoriasComputador++;
            }
        }

        printf("\n=== PLACAR ===\n");
        printf("Jogador: %d\n", vitoriasJogador);
        printf("Computador: %d\n", vitoriasComputador);
        printf("Empates: %d\n", empates);

        printf("\nDeseja jogar novamente? (S/N): ");
        scanf(" %c", &continuar);
    }

    printf("\nJogo encerrado.\n");
    printf("Placar final:\n");
    printf("Jogador: %d\n", vitoriasJogador);
    printf("Computador: %d\n", vitoriasComputador);
    printf("Empates: %d\n", empates);

    return 0;
}

void mostrarMenu() {
    printf("\n=== PEDRA, PAPEL, TESOURA, LAGARTO, SPOCK ===\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("4 - Lagarto\n");
    printf("5 - Spock\n");
    printf("Escolha uma opcao: ");
}

const char* nomeJogada(int jogada) {
    switch (jogada) {
        case 1: return "Pedra";
        case 2: return "Papel";
        case 3: return "Tesoura";
        case 4: return "Lagarto";
        case 5: return "Spock";
        default: return "Desconhecida";
    }
}

int venceu(int jogador, int computador) {
    if ((jogador == 1 && (computador == 3 || computador == 4)) ||
        (jogador == 2 && (computador == 1 || computador == 5)) ||
        (jogador == 3 && (computador == 2 || computador == 4)) ||
        (jogador == 4 && (computador == 2 || computador == 5)) ||
        (jogador == 5 && (computador == 1 || computador == 3))) {
        return 1;
    }
    return 0;
}

const char* motivoVitoria(int vencedor, int perdedor) {
    if (vencedor == 1 && perdedor == 3) return "Pedra esmaga Tesoura";
    if (vencedor == 1 && perdedor == 4) return "Pedra esmaga Lagarto";

    if (vencedor == 2 && perdedor == 1) return "Papel cobre Pedra";
    if (vencedor == 2 && perdedor == 5) return "Papel refuta Spock";

    if (vencedor == 3 && perdedor == 2) return "Tesoura corta Papel";
    if (vencedor == 3 && perdedor == 4) return "Tesoura decapita Lagarto";

    if (vencedor == 4 && perdedor == 2) return "Lagarto come Papel";
    if (vencedor == 4 && perdedor == 5) return "Lagarto envenena Spock";

    if (vencedor == 5 && perdedor == 1) return "Spock vaporiza Pedra";
    if (vencedor == 5 && perdedor == 3) return "Spock esmaga Tesoura";

    return "Motivo desconhecido";
}