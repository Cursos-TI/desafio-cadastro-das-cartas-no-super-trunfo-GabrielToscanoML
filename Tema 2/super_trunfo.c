#include <stdio.h>

int main() {
    
    // carta 1
    char carta1_estado, carta1_codigo_cidade[4], carta1_nome_cidade[50];
    int carta1_pontos_turisticos;
    unsigned long int carta1_populacao;
    float carta1_area, carta1_pib, carta1_densidade_populacional, carta1_pib_per_capita;

    // carta 2
    char carta2_estado, carta2_codigo_cidade[4], carta2_nome_cidade[50];
    int carta2_pontos_turisticos;
    unsigned long int carta2_populacao;
    float carta2_area, carta2_pib, carta2_densidade_populacional, carta2_pib_per_capita;

    printf("Cadastro das Cartas \n\n");

    // Pegando os dados da primeira carta
    printf("Cadastrando a primeira carta: \n\n");

    printf("Digite a letra correspondente ao estado ('A' a 'H'): \n");
    scanf(" %c", &carta1_estado);

    printf("Digite o código da cidade: \n");
    scanf("%s", carta1_codigo_cidade);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", carta1_nome_cidade);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &carta1_populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &carta1_area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &carta1_pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &carta1_pontos_turisticos);

    carta1_densidade_populacional = carta1_populacao / carta1_area;
    carta1_pib_per_capita = (carta1_pib * 1000000000) / carta1_populacao;

    // Pegando os dados da segunda carta
    printf("\nCadastrando a segunda carta: \n\n");

    printf("Digite a letra correspondente ao estado ('A' a 'H'): \n");
    scanf(" %c", &carta2_estado);

    printf("Digite o código da cidade: \n");
    scanf("%s", carta2_codigo_cidade);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", carta2_nome_cidade);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &carta2_populacao);

    printf("Digite a área da cidade: \n");
    scanf("%f", &carta2_area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &carta2_pib);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &carta2_pontos_turisticos);

    carta2_densidade_populacional = carta2_populacao / carta2_area;
    carta2_pib_per_capita = (carta2_pib * 1000000000) / carta2_populacao;

    printf("\n\nComparação de cartas (Atributo: População):\n\n");

    printf("Carta 1 - %s: %lu \n", carta1_nome_cidade, carta1_populacao);
    printf("Carta 2 - %s: %lu \n", carta2_nome_cidade, carta2_populacao);

    printf("\nResultado: ");
    if (carta1_populacao > carta2_populacao) {
        printf("Carta 1 (%s) venceu!\n", carta1_nome_cidade);
    } else if (carta1_populacao < carta2_populacao) {
        printf("Carta 2 (%s) venceu!\n", carta2_nome_cidade);
    } else {
        printf("As duas cartas tem a mesma população\n");
    }

    return 0;
}