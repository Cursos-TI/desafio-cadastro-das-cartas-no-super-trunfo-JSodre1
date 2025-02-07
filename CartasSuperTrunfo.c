// Desafio Super Trunfo - Estácio de Sá
// Aluno: Jairçon Freitas Sodré Pereira Júnior
// Engenharia de Software - Introdução à Programação de Computadores
// Nível AVENTUREIRO

#include <stdio.h>
#include <string.h>

int main() {

// Entrada e inicialização das variáveis

    char codigo_letra_cidade1 = ' ';
    int codigo_numero_cidade1 = 0;
    char nome_cidade1[50] = "";
    unsigned int populacao_cidade1 = 0;
    int area_cidade1 = 0;
    float pib_cidade1 = 0;
    int pontos_turisticos_cidade1 = 0;
    float densidade_cidade1 = 0;
    float pib_percapta_cidade1 = 0;

// Entrada de dados da carta pelo usuário

    printf("\n------------------------------------------------------\n");
    printf("\n***Vamos jogar Super Trunfo! Cadastre sua carta***\n");
    printf("\n------------------------------------------------------\n"); // Para melhorar a visulização no terminal

    printf("Digite a Primeira Letra do seu Estado: \n");
    scanf("%c", &codigo_letra_cidade1);
    getchar(); // Limpando o cache após inserir os dados

    printf("Digite o Número da sua Carta: \n");
    
    scanf("%d", &codigo_numero_cidade1);
    getchar(); // Limpando o cache após inserir os dados

    printf("Digite o Nome da sua cidade: \n");
    scanf("%s", nome_cidade1);
    getchar(); // Limpando o cache após inserir os dados
    
    printf("Digite a População da sua Cidade: \n");
    scanf("%u", &populacao_cidade1);
    getchar(); // Limpando o cache após inserir os dados

    printf("Digite o tamanho da sua Cidade: \n");
    scanf("%d", &area_cidade1);
    getchar(); // Limpando o cache após inserir os dados

    printf("Digite o PIB da sua Cidade: \n");
    scanf("%f", &pib_cidade1);
    getchar(); // Limpando o cache após inserir os dados

    printf("Digite a quantidade de Pontos Turisticos da sua Cidade: \n");
    scanf("%d", &pontos_turisticos_cidade1);
    getchar(); // Limpando o cache após inserir os dados

    printf("\n------------------------------------------------------\n");
    printf("\nCarta cadastrada com sucesso!\n------------------------------------------------------\n"); // Para melhorar a visulização no terminal

// Incremento dos operadores matemáticos para o desafio AVENTUREIRO

    densidade_cidade1 = (float) populacao_cidade1 / area_cidade1;
    pib_percapta_cidade1 = pib_cidade1 / populacao_cidade1; 

// Impressão do resultado da carta linha a linha

    printf("\nCódigo da Cidade: %c %d\n", codigo_letra_cidade1, codigo_numero_cidade1); // Imprimindo código da Cidade Na mesma linha
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População da Cidade: %u pessoas\n", populacao_cidade1);
    printf("A Densidade Populacional é de: %.2f hab/km²\n", densidade_cidade1);
    printf("Tamanho da Cidade: %d km²\n", area_cidade1); // Usando %.2lf para imprimir double com 2 casas decimais
    printf("O PIB da Cidade é de: R$ %.f\n", pib_cidade1); // Adicionando unidade monetária
    printf("O PIB per Capta da cidade é: R$ %.2f\n", pib_percapta_cidade1);
    printf("Quantidade de Pontos Turísticos: %d\n", pontos_turisticos_cidade1);
    printf("\n------------------------------------------------------\n"); // Para melhorar a visulização no terminal
   
    return 0;
}