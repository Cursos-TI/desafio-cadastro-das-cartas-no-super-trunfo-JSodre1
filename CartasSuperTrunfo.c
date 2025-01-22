#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
        // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo_cidade = 0;
    char nome_cidade[20] = "";
    float populacao_cidade = 0;
    float area_cidade = 0;
    float pib_cidade = 0;
    int pontos_turisticos_cidade = 0;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Digite o Código da sua Cidade: \n");
    scanf("%d", &codigo_cidade);
    
    printf("Digite o Nome da sua cidade: \n");
    scanf("%s", &nome_cidade);

    printf("Digite a População da sua Cidade: \n");
    scanf("%f", &populacao_cidade);

    printf("Digite o tamanho da área correspondente a sua Cidade: \n");
    scanf("%f", &area_cidade);

    printf("Digite o PIB da sua Cidade: \n");
    scanf("%f", &pib_cidade);

    printf("Digite a quantidade de Pontos Turisticos da sua Cidade: \n");
    scanf("%d", &pontos_turisticos_cidade);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Cadastro realizado com sucesso!\n");

    printf("Códgio da Cidade: %d\n", codigo_cidade);
    printf("Nome da Cidade: %s\n", codigo_cidade);
    printf("População da Cidade: %d\n", populacao_cidade);
    printf("Tamanho da Cidade: %d\n", area_cidade);
    printf("O PIB da Cidade é de: %d\n", codigo_cidade);
    printf("Quantidade de Pontos Turisticos: %d\n", pontos_turisticos_cidade);

    return 0;
}