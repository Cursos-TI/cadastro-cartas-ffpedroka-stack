#include <stdio.h>

// Estrutura da carta
struct Carta {
    char estado[20];
    char cidade[50];
    int populacao;
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
    scanf("%d", &c->populacao);

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
    printf("Populacao: %d\n", c.populacao);
    printf("Area: %.2f\n", c.area);
    printf("Pontos Turisticos: %d\n", c.pontos);
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
    printf("Novo comite\n");
    
    return 0;

}