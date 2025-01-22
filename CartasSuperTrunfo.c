// Desafio Super Trunfo - Estácio de Sá
// Aluno: Jairçon Freitas Sodré Pereira Júnior
// Numeros grandes ainda são problemáticos

#include <stdio.h>

int main() {

// Entrada e inicialização das variáveis

    char codigo_cidade = 0;
    char nome_cidade[50] = "s";
    int populacao_cidade = 0;
    double area_cidade = 0;
    double pib_cidade = 0;
    int pontos_turisticos_cidade = 0;

// Entrada de dados da carta pelo usuário

    printf("\n------------------------------------------------------\n");
    printf("\n***Vamos jogar trunfo! Cadastre a primeira carta***\n");
    printf("\n------------------------------------------------------\n"); // Para melhorar a visulização no terminal

    printf("Digite o Código da sua Cidade: \n");
    scanf("%s", &codigo_cidade);

    printf("Digite o Nome da sua cidade: \n");
    scanf("%s", nome_cidade);
    
    printf("Digite a População da sua Cidade: \n");
    scanf("%d", &populacao_cidade);

    printf("Digite o tamanho da sua Cidade: \n");
    scanf("%lf", &area_cidade);

    printf("Digite o PIB da sua Cidade: \n");
    scanf("%lf", &pib_cidade);

    printf("Digite a quantidade de Pontos Turisticos da sua Cidade: \n");
    scanf("%d", &pontos_turisticos_cidade);

    printf("\n------------------------------------------------------\n");
    printf("\nCarta cadastrada com sucesso!\n------------------------------------------------------"); // Para melhorar a visulização no terminal

// Impressão do resultado da carta linha a linha

    printf("\nCódigo da Cidade: %d\n", codigo_cidade);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População da Cidade: %d\n", populacao_cidade);
    printf("Tamanho da Cidade: %.2lf km²\n", area_cidade); // Usando %.2lf para imprimir double com 2 casas decimais
    printf("O PIB da Cidade é de: R$ %.2lf\n", pib_cidade); // Adicionando unidade monetária
    printf("Quantidade de Pontos Turísticos: %d\n", pontos_turisticos_cidade);
    printf("\n------------------------------------------------------\n"); // Para melhorar a visulização no terminal
   
    return 0;
}