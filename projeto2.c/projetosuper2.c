#include <stdio.h>

// Estrutura da carta
struct Carta {
    char estado[20];
    char cidade[50];
    float populacao;
    float area;
    int pontos;
};

// Função para cadastrar uma carta
void cadastrarCarta(struct Carta *c) {

    printf("Nome do Estado:\n");
    scanf("%19s", c->estado);

    printf("Nome da Cidade:\n");
    scanf("%49s", c->cidade);

    printf("Numero da Populacao:\n");
    scanf("%f", &c->populacao);

    printf("Tamanho da Area:\n");
    scanf("%f", &c->area);

    printf("Pontos turisticos:\n");
    scanf("%d", &c->pontos);
}

// Função para mostrar uma carta
void mostrarCarta(struct Carta c, int numero) {

    printf("\n--- Carta %d ---\n", numero);
    printf("Estado: %s\n", c.estado);
    printf("Cidade: %s\n", c.cidade);
    printf("Populacao: %.0f\n", c.populacao);
    printf("Area: %.2f\n", c.area);
    printf("Pontos Turisticos: %d\n", c.pontos);
}

// Função de comparação
void compararCartas(struct Carta c1, struct Carta c2) {
    int opcao;

    printf("\nEscolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - Pontos Turisticos\n");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            if (c1.populacao > c2.populacao)
                printf("Carta 1 venceu na Populacao!\n");
            else if (c1.populacao < c2.populacao)
                printf("Carta 2 venceu na Populacao!\n");
            else
                printf("Empate na Populacao!\n");
            break;

        case 2:
            if (c1.area > c2.area)
                printf("Carta 1 venceu na Area!\n");
            else if (c1.area < c2.area)
                printf("Carta 2 venceu na Area!\n");
            else
                printf("Empate na Area!\n");
            break;

        case 3:
            if (c1.pontos > c2.pontos)
                printf("Carta 1 venceu nos Pontos Turisticos!\n");
            else if (c1.pontos < c2.pontos)
                printf("Carta 2 venceu nos Pontos Turisticos!\n");
            else
                printf("Empate nos Pontos Turisticos!\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }
}

int main() {

    struct Carta carta1, carta2;

    printf("Cadastro da Carta 1\n");
    cadastrarCarta(&carta1);

    printf("\nCadastro da Carta 2\n");
    cadastrarCarta(&carta2);

    printf("\n===== CARTAS CADASTRADAS =====\n");
    mostrarCarta(carta1, 1);
    mostrarCarta(carta2, 2);

    printf("\n===== COMPARACAO =====\n");
    compararCartas(carta1, carta2);
    printf("Novo comite\n");

    return 0;
}