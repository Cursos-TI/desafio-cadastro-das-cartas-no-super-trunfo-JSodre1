/* 
Desafio Lógica do Super Trunfo - Estácio de Sá
Aluno: Jairçon Freitas Sodré Pereira Júnior
Nível MESTRE
O Código apresenta erro quando eu tento colocar "Espaço" no nome da cidade
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

// Entrada e inicialização das variáveis

// Primeira Carta

    char pais1[20] = "";
    char codigo_letra_cidade1[3]= "";
    int codigo_numero_cidade1 = 0;
    char nome_cidade1[50] = "";
    unsigned long int populacao_cidade1 = 0;
    float area_cidade1 = 0;
    int pib_cidade1 = 0;
    int pontos_turisticos_cidade1 = 0;
    float densidade_cidade1 = 0;
    float pib_percapta_cidade1 = 0;
    float super_poder1 = 0;
    
// Segunda Carta

    char pais2[20] = "";
    char codigo_letra_cidade2[3] = "";
    int codigo_numero_cidade2 = 0;
    char nome_cidade2[50] = "";
    unsigned long int populacao_cidade2 = 0;
    float area_cidade2 = 0;
    int pib_cidade2 = 0;
    int pontos_turisticos_cidade2 = 0;
    float densidade_cidade2 = 0;
    float pib_percapta_cidade2 = 0;
    float super_poder2 = 0;

// Batalha
    int opcao1, opcao2 = 0;
    int resultado1, resultado2 = 0;
    double comparacaoMultipla1, comparacaoMultipla2 = 0;
        
// Apresentação do Jogo

    printf("\n------------------------------------------------------\n");
    printf("\n***Vamos jogar Super Trunfo! Você terá que cadastrar Duas Cartas e ao Final, vamos compará-las e definir qual a vencedora***\n");
    printf("\n Vamos para o Cadastro da PRIMEIRA CARTA\n");
    printf("\n------------------------------------------------------\n"); // Para melhorar a visulização no terminal

// Entrada de dados da Primeira carta pelo usuário

    printf("Digite o nome do seu País - sem 'ESPAÇOS' (Carta 1): \n");
    scanf("%s", &pais1);

    printf("Digite a Primeira Letra do seu Estado (Carta 1): \n");
    scanf("%s", &codigo_letra_cidade1);
        
    printf("Digite o Número da sua Carta (Carta 1): \n");
    scanf("%d", &codigo_numero_cidade1);
    
    printf("Digite o Nome da sua cidade - sem 'ESPAÇOS' (Carta 1): \n");
    scanf("%s", &nome_cidade1);
    
    printf("Digite a População da sua Cidade (Carta 1): \n");
    scanf("%lu", &populacao_cidade1);
    
    printf("Digite o tamanho da sua Cidade (Carta 1): \n");
    scanf("%f", &area_cidade1);
    
    printf("Digite o PIB da sua Cidade (Carta 1): \n");
    scanf("%d", &pib_cidade1);
    
    printf("Digite a quantidade de Pontos Turisticos da sua Cidade (Carta 1): \n");
    scanf("%d", &pontos_turisticos_cidade1);

    // Incremento das variáveis e operadores matemáticos para o desafio MESTRE

    densidade_cidade1 = (float) populacao_cidade1 / area_cidade1;
    pib_percapta_cidade1 = pib_cidade1 / populacao_cidade1;
    super_poder1 = populacao_cidade1 + area_cidade1 + pib_cidade1 + pontos_turisticos_cidade1 + pib_percapta_cidade1;

    printf("\n------------------------------------------------------\n");
    printf("\nPrimeira Carta cadastrada com sucesso!\n------------------------------------------------------\n"); // Para melhorar a visulização

// Impressão do resultado da PRIMEIRA carta linha a linha

    printf("Carta 1\n");
    printf("\nCódigo da Carta: %s %d\n", codigo_letra_cidade1, codigo_numero_cidade1); // Imprimindo código da Cidade Na mesma linha
    printf("Seu País é: %s\n", pais1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População da Cidade: %lu pessoas\n", populacao_cidade1);
    printf("A Densidade Populacional é de: %.2f hab/km²\n", densidade_cidade1);
    printf("Tamanho da Cidade: %.2f km²\n", area_cidade1); // Usando %.2lf para imprimir double com 2 casas decimais
    printf("O PIB da Cidade é de: R$ %d\n", pib_cidade1); // Adicionando unidade monetária
    printf("O PIB per Capta da cidade é de: R$ %.2f\n", pib_percapta_cidade1);
    printf("Quantidade de Pontos Turísticos: %d\n", pontos_turisticos_cidade1);
    printf("O Super Poder é de: %.f\n", super_poder1);
    getchar(); // Para limpar o cache e evitar erro
    printf("\n------------------------------------------------------\n"); // Para melhorar a visulização no terminal
    printf("\nAgora Vamos Cadastrar a Segunda Carta\n");

// Entrada de dados da Segunda carta pelo usuário

    printf("Digite o nome do seu País - sem 'ESPAÇOS' (Carta 2): \n");
    scanf("%s", &pais2);

    printf("Digite a Primeira Letra do seu Estado (Carta 2): \n");
    scanf("%s", &codigo_letra_cidade2);
        
    printf("Digite o Número da sua Carta (Carta 2): \n");
    scanf("%d", &codigo_numero_cidade2);
    
    printf("Digite o Nome da sua cidade - sem 'ESPAÇOS' (Carta 2): \n");
    scanf("%s", &nome_cidade2);
    
    printf("Digite a População da sua Cidade (Carta 2): \n");
    scanf("%lu", &populacao_cidade2);
    
    printf("Digite o tamanho da sua Cidade (Carta 2): \n");
    scanf("%f", &area_cidade2);
    
    printf("Digite o PIB da sua Cidade (Carta 2): \n");
    scanf("%d", &pib_cidade2);
    
    printf("Digite a quantidade de Pontos Turisticos da sua Cidade (Carta 2): \n");
    scanf("%d", &pontos_turisticos_cidade2);
    
// Incremento das variáveis e operadores matemáticos para o desafio AVENTUREIRO

    densidade_cidade2 = (float) populacao_cidade2 / area_cidade2;
    pib_percapta_cidade2 = pib_cidade2 / populacao_cidade2;
    super_poder2 = populacao_cidade2 + area_cidade2 + pib_cidade2 + pontos_turisticos_cidade2 + pib_percapta_cidade2;

    printf("\n------------------------------------------------------\n");
    printf("Segunda Carta cadastrada com sucesso!\n------------------------------------------------------\n"); // Para melhorar a visulização no terminal

// Impressão do resultado da SEGUNDA carta linha a linha

    printf("Carta 2\n");
    printf("\nCódigo da Carta: %c %d\n", codigo_letra_cidade2, codigo_numero_cidade2); // Imprimindo código da Cidade Na mesma linha
    printf("Seu País é: %s\n", pais2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População da Cidade: %lu pessoas\n", populacao_cidade2);
    printf("A Densidade Populacional é de: %.2f hab/km²\n", densidade_cidade2);
    printf("Tamanho da Cidade: %.2f km²\n", area_cidade2); // Usando %.2lf para imprimir double com 2 casas decimais
    printf("O PIB da Cidade é de: R$ %.d\n", pib_cidade2); // Adicionando unidade monetária
    printf("O PIB per Capta da cidade é de: R$ %.2f\n", pib_percapta_cidade2);
    printf("Quantidade de Pontos Turísticos: %d\n", pontos_turisticos_cidade2);
    printf("O Super Poder é de: %.f\n", super_poder2);
    printf("\n------------------------------------------------------\n"); // Para melhorar a visulização no terminal

    printf("Agora vamos comparar e decidir qual carta é vencedora.\n");
    printf("Para isso você terá que escolher dois atributos para duelar entre as cartas!\n");
    printf("O atributo com melhor valor, vence!\n");
    printf("\n------------------------------------------------------\n");

    printf("-------------------Comparação das Cartas-------------------\n"); // Imprimindo os resultados individuais
    printf("Escolha o Primeiro atributo (de 1 a 7): \n");
    
    printf("1. População\n");
    printf("2. Tamanho da Cidade (Área)\n");
    printf("3. Densidade Populacional\n");
    printf("4. PIB\n");
    printf("5. PIB per Capta\n");
    printf("6. Pontos Turísticos\n");
    printf("7. Super Poder\n");
    scanf("%d", &opcao1);
    printf("Agora vamos para o Segundo Atributo!\n");

    printf("-------------------Comparação das Cartas-------------------\n"); // Imprimindo os resultados individuais
    printf("O segundo atributo NÃO PODE SER O MESMO escolhido anteriormente\n");
    printf("Escolha o Segundo atributo (de 1 a 7): \n");
    opcao1 == 1 ? printf("-  População - já foi escolhido\n") : printf("1. População\n");
    opcao1 == 2 ? printf("-  Tamanho da Cidade (Área) - Já foi escolhido\n") : printf("2. Tamanho da Cidade (Área)\n");
    opcao1 == 3 ? printf("-  Densidade Populacional - Já foi escolhido\n") : printf("3. Densidade Populacional\n");
    opcao1 == 4 ? printf("-  PIB - Já foi escolhido\n") : printf("4. PIB\n");
    opcao1 == 5 ? printf("-  PIB per Capta - Já foi escolhido\n") : printf("5. PIB per Capta\n");
    opcao1 == 6 ? printf("-  Pontos Turísticos - Já foi escolhido\n") : printf("6. Pontos Turísticos\n");
    opcao1 == 7 ? printf("-  Super Poder - Já foi escolhido\n") : printf("7. Super Poder\n");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1){ // Interrompe a execução do programa caso repita o código
        printf("Você não pode escolher a mesma OPÇÃO anterior. Volte tudo!");
        exit(0);
    }

    switch (opcao1){
        case 1: // Disputa pela População
            if (populacao_cidade1 > populacao_cidade2){
                printf("População: Carta 1 Venceu!\n- População Carta 1: %d\n- População Carta 2: %d\n", populacao_cidade1, populacao_cidade2);
                resultado1 = 1;
                comparacaoMultipla1 = populacao_cidade1;
                comparacaoMultipla2 = populacao_cidade2;
            } else {
                printf("População: Carta 2 Venceu!\n- População Carta 1: %d\n- População Carta 2: %d\n", populacao_cidade1, populacao_cidade2);
            }
            break;

        case 2: // Disputa pelo tamanho da Cidade
            if (area_cidade1 > area_cidade2){
                printf("Área: Carta 1 Venceu!\n- Área Carta 1: %d\n- Área Carta 2: %d\n", area_cidade1, area_cidade2);
                resultado1 = 1;
                comparacaoMultipla1 = area_cidade1;
                comparacaoMultipla2 = area_cidade2;
            } else {
                printf("Área: Carta 2 Venceu!\n- Área Carta 1: %d\n- Área Carta 2: %d\n", area_cidade1, area_cidade2);
            }
            break;
        
        case 3: // Disputa pela Densidade Populacional
            if (densidade_cidade1 < densidade_cidade2){
                printf("Densidade Populacional: Carta 1 Venceu!\n- Densidade Populacional Carta 1: %d\n- Densidade Populacional Carta 2: %d\n", densidade_cidade1, densidade_cidade2);
                resultado1 = 1;
                comparacaoMultipla1 = densidade_cidade1;
                comparacaoMultipla2 = densidade_cidade2;
            } else {
                printf("Densidade Populacional: Carta 2 Venceu!\n- Densidade Populacional Carta 1: %d\n- Densidade Populacional Carta 2: %d\n", densidade_cidade1, densidade_cidade2);
            }
            break;

        case 4:
            if (pib_cidade1 > pib_cidade2){
                printf("PIB: Carta 1 Venceu\n- PIB Carta 1: %d\n- PIB Carta 2: %d\n", pib_cidade1, pib_cidade2);
                resultado1 = 1;
                comparacaoMultipla1 = pib_cidade1;
                comparacaoMultipla2 = pib_cidade2;
            } else {
                printf("PIB: Carta 2 Venceu\n- PIB Carta 1: %d\n- PIB Carta 2: %d\n", pib_cidade1, pib_cidade2);
            }
            break;

        case 5:
            if (pib_percapta_cidade1 > pib_percapta_cidade2){
                printf("PIB per Capta: Carta 1 Venceu\n- PIB per Capta Carta 1: %.2f\n- PIB per Capta Carta 2: %.2f\n", pib_percapta_cidade1, pib_percapta_cidade2);
                resultado1 = 1;
                comparacaoMultipla1 = pib_percapta_cidade1;
                comparacaoMultipla2 = pib_percapta_cidade2;
            } else {
                printf("PIB per Capta: Carta 2 Venceu\n- PIB per Capta Carta 1: %.2f\n- PIB per Capta Carta 2: %.2f\n", pib_percapta_cidade1, pib_percapta_cidade2);
            }
            break;

        case 6:
            if (pontos_turisticos_cidade1 > pontos_turisticos_cidade2){
                printf("Pontos Turísticos: Carta 1 Venceu\n- Pontos Turísticos Carta 1: %d\n- Pontos Turisticos Carta 2: %d\n", pontos_turisticos_cidade1, pontos_turisticos_cidade2);
                resultado1 = 1;
                comparacaoMultipla1 = pontos_turisticos_cidade1;
                comparacaoMultipla2 = pontos_turisticos_cidade2;
            } else {
                printf("Pontos Turísticos: Carta 2 Venceu\n- Pontos Turísticos Carta 1: %d\n- Pontos Turisticos Carta 2: %d\n", pontos_turisticos_cidade1, pontos_turisticos_cidade2);
            }
            break;

        case 7:
            if (super_poder1 > super_poder2){
                printf("Super Poder: Carta 1 Venceu\n- Super Poder Carta 1: %.2f\n- Super Poder Carta 2: %.2f\n", super_poder1, super_poder2);
                resultado1 = 1;
                comparacaoMultipla1 = super_poder1;
                comparacaoMultipla2 = super_poder2;
            } else {
                printf("Super Poder: Carta 2 Venceu\n- Super Poder Carta 1: %.2f\n- Super Poder Carta 2: %.2f\n", super_poder1, super_poder2);
            }
            break;

        default:
            printf("Escolha uma opcão válida!");
        break;

    }

    resultado1 == 1 ? printf("\nParabéns!!! Você venceu a Primeira disputa individual. Vamos para o próximo atributo.\n") : printf("\nQue pena, você perdeu a Primeira disputa Individual. Vamos para o próximo atributo.\n");


    switch (opcao2){
        case 1: // Disputa pela População
            if (populacao_cidade1 > populacao_cidade2){
                printf("População: Carta 1 Venceu!\n- População Carta 1: %d\n- População Carta 2: %d\n", populacao_cidade1, populacao_cidade2);
                resultado2 = 1;
                comparacaoMultipla1 += populacao_cidade1;
                comparacaoMultipla2 += populacao_cidade2;
            } else {
                printf("População: Carta 2 Venceu!\n- População Carta 1: %d\n- População Carta 2: %d\n", populacao_cidade1, populacao_cidade2);
            }
            break;

        case 2: // Disputa pelo tamanho da Cidade
            if (area_cidade1 > area_cidade2){
                printf("Área: Carta 1 Venceu!\n- Área Carta 1: %d\n- Área Carta 2: %d\n", area_cidade1, area_cidade2);
                resultado2 = 1;
                comparacaoMultipla1 += area_cidade1;
                comparacaoMultipla2 += area_cidade2;
            } else {
                printf("Área: Carta 2 Venceu!\n- Área Carta 1: %d\n- Área Carta 2: %d\n", area_cidade1, area_cidade2);
            }
            break;
        
        case 3: // Disputa pela Densidade Populacional
            if (densidade_cidade1 < densidade_cidade2){
                printf("Densidade Populacional: Carta 1 Venceu!\n- Densidade Populacional Carta 1: %d\n- Densidade Populacional Carta 2: %d\n", densidade_cidade1, densidade_cidade2);
                resultado2 = 1;
                comparacaoMultipla1 += densidade_cidade1;
                comparacaoMultipla2 += densidade_cidade2;
            } else {
                printf("Densidade Populacional: Carta 2 Venceu!\n- Densidade Populacional Carta 1: %d\n- Densidade Populacional Carta 2: %d\n", densidade_cidade1, densidade_cidade2);
            }
            break;

        case 4:
            if (pib_cidade1 > pib_cidade2){
                printf("PIB: Carta 1 Venceu\n- PIB Carta 1: %d\n- PIB Carta 2: %d\n", pib_cidade1, pib_cidade2);
                resultado2 = 1;
                comparacaoMultipla1 += pib_cidade1;
                comparacaoMultipla2 += pib_cidade2;
            } else {
                printf("PIB: Carta 2 Venceu\n- PIB Carta 1: %d\n- PIB Carta 2: %d\n", pib_cidade1, pib_cidade2);
            }
            break;

        case 5:
            if (pib_percapta_cidade1 > pib_percapta_cidade2){
                printf("PIB per Capta: Carta 1 Venceu\n- PIB per Capta Carta 1: %.2f\n- PIB per Capta Carta 2: %.2f\n", pib_percapta_cidade1, pib_percapta_cidade2);
                resultado2 = 1;
                comparacaoMultipla1 += pib_percapta_cidade1;
                comparacaoMultipla2 += pib_percapta_cidade2;
            } else {
                printf("PIB per Capta: Carta 2 Venceu\n- PIB per Capta Carta 1: %.2f\n- PIB per Capta Carta 2: %.2f\n", pib_percapta_cidade1, pib_percapta_cidade2);
            }
            break;

        case 6:
            if (pontos_turisticos_cidade1 > pontos_turisticos_cidade2){
                printf("Pontos Turísticos: Carta 1 Venceu\n- Pontos Turísticos Carta 1: %d\n- Pontos Turisticos Carta 2: %d\n", pontos_turisticos_cidade1, pontos_turisticos_cidade2);
                resultado2 = 1;
                comparacaoMultipla1 += pontos_turisticos_cidade1;
                comparacaoMultipla2 += pontos_turisticos_cidade2;
            } else {
                printf("Pontos Turísticos: Carta 2 Venceu\n- Pontos Turísticos Carta 1: %d\n- Pontos Turisticos Carta 2: %d\n", pontos_turisticos_cidade1, pontos_turisticos_cidade2);
            }
            break;

        case 7:
            if (super_poder1 > super_poder2){
                printf("Super Poder: Carta 1 Venceu\n- Super Poder Carta 1: %.2f\n- Super Poder Carta 2: %.2f\n", super_poder1, super_poder2);
                resultado2 = 1;
                comparacaoMultipla1 += super_poder1;
                comparacaoMultipla2 += super_poder2;
            } else {
                printf("Super Poder: Carta 2 Venceu\n- Super Poder Carta 1: %.2f\n- Super Poder Carta 2: %.2f\n", super_poder1, super_poder2);
            }
            break;

        default:
            printf("Escolha uma opcão válida!");
        break;

    }

    resultado2 == 1 ? printf("\nParabéns!!! Você venceu a Segunda disputa individual.\n") : printf("\nQue pena, você perdeu a Segunda disputa Individual.\n");
    printf("\n------------------------------------------------------\n");
    printf("Chegou a hora da Verdade! Agora vamos fazer a comparação dos dois atributos juntos de ambas as cartas e ver quem é o grande VENCEDOR!!!");

    if (comparacaoMultipla1 > comparacaoMultipla2){
        printf("\n------------------------------------------------------\n");
        printf("\n- A soma dos atributos da Carta 1 é: %2.f\n", comparacaoMultipla1);
        printf("\n- A soma dos atributos da Carta 2 é: %2.f\n", comparacaoMultipla2);
        printf("\n------------------------------------------------------\n");
        printf("\n CARTA 1 GANHOU! Parabénns!!! Você é o grande vencedor!!!");
        printf("Carta 1\n");
        printf("\nCódigo da Carta: %s %d\n", codigo_letra_cidade1, codigo_numero_cidade1); // Imprimindo código da Cidade Na mesma linha
        printf("Seu País é: %s\n", pais1);
        printf("Nome da Cidade: %s\n", nome_cidade1);
        printf("População da Cidade: %lu pessoas\n", populacao_cidade1);
        printf("A Densidade Populacional é de: %.2f hab/km²\n", densidade_cidade1);
        printf("Tamanho da Cidade: %.2f km²\n", area_cidade1); // Usando %.2lf para imprimir double com 2 casas decimais
        printf("O PIB da Cidade é de: R$ %d\n", pib_cidade1); // Adicionando unidade monetária
        printf("O PIB per Capta da cidade é de: R$ %.2f\n", pib_percapta_cidade1);
        printf("Quantidade de Pontos Turísticos: %d\n", pontos_turisticos_cidade1);
        printf("O Super Poder é de: %.f\n", super_poder1);
        printf("\n------------------------------------------------------\n"); 

    } else if (comparacaoMultipla1 < comparacaoMultipla2){
        printf("\n------------------------------------------------------\n");
        printf("\n- A soma dos atributos da Carta 1 é: %2.f\n", comparacaoMultipla1);
        printf("\n- A soma dos atributos da Carta 2 é: %2.f\n", comparacaoMultipla2);
        printf("\n------------------------------------------------------\n");
        printf("\n CARTA 2 GANHOU! Que pena, você perdeu!");
        printf("\nCódigo da Carta: %c %d\n", codigo_letra_cidade2, codigo_numero_cidade2); // Imprimindo código da Cidade Na mesma linha
        printf("Seu País é: %s\n", pais2);
        printf("Nome da Cidade: %s\n", nome_cidade2);
        printf("População da Cidade: %lu pessoas\n", populacao_cidade2);
        printf("A Densidade Populacional é de: %.2f hab/km²\n", densidade_cidade2);
        printf("Tamanho da Cidade: %.2f km²\n", area_cidade2); // Usando %.2lf para imprimir double com 2 casas decimais
        printf("O PIB da Cidade é de: R$ %.d\n", pib_cidade2); // Adicionando unidade monetária
        printf("O PIB per Capta da cidade é de: R$ %.2f\n", pib_percapta_cidade2);
        printf("Quantidade de Pontos Turísticos: %d\n", pontos_turisticos_cidade2);
        printf("O Super Poder é de: %.f\n", super_poder2);
    } else {
        printf("\n------------------------------------------------------\n");
        printf("\n- A soma dos atributos da Carta 1 é: %2.f\n", comparacaoMultipla1);
        printf("\n- A soma dos atributos da Carta 2 é: %2.f\n", comparacaoMultipla2);
        printf("\n------------------------------------------------------\n");
        printf("\n Inacreditavelmente vocês empataram!");
    }

    printf("\n------------Obrigado por jogar SUPER TRUNFO! Até a Próxima----------------------\n");
    return 0;
}
