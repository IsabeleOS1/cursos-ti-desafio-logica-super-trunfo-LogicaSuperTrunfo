#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() 
{
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    printf("Super Trunfo\n");
    
        int opcao; 
        char estado;
        char codigo [10];
        char cidade [50];
        int populacao;
        float area;
        float pib;
        float densidade;
        int pontosturisticos;

        char estado2;
        char codigo2 [10];
        char cidade2 [50];
        int populacao2;
        float area2;
        float pib2;
        float densidade2;
        int pontosturisticos2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("Digite as informações da carta 1\n");
    printf("Estado (A-H): ");
    scanf("%s", &estado);
    printf("Código de Carta (ex:A01): ");   
    scanf("%s", &codigo);
    printf("Nome da Cidade: ");
    scanf("%s", &cidade);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área (km2): ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos);
    densidade = populacao / area;
    printf("Densidade: %f\n", densidade);

    printf("Digite as informações da carta 2\n");
    printf("Estado (A-H): ");
    scanf("%s", &estado2);
    printf("Código de Carta (ex:A01): ");   
    scanf("%s", &codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", &cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km2): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);
    densidade2 = populacao2 / area2;
    printf("Densidade: %f\n", densidade2);
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    printf("Escolha o atributo para comparar\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            if (populacao > populacao2)
            {
                printf("Carta 1 venceu, por maior população!\n");
                printf("A cidade vencedora é: %s\n", cidade);
            }
            else if (populacao2 > populacao)
            {
                printf("Carta 2 venceu, por maior população!\n");
                printf("A cidade vencedora é: %s\n", cidade2);
            }
            break;
        case 2:
            if (area > area2)
            {
                printf("Carta 1 venceu, por maior área!\n");
                printf("A cidade vencedora é: %s\n", cidade);
            }
            else if (area2 > area)
            {
                printf("Carta 2 venceu, por maior área!\n");
                printf("A cidade vencedora é: %s\n", cidade2);
            }
            break;
        case 3:
            if (pib > pib2)
            {
                printf("Carta 1 venceu, por maior PIB!\n");
                printf("A cidade vencedora é: %s\n", cidade);
            }
            else if (pib2 > pib)
            {
                printf("Carta 2 venceu, por maior PIB!\n");
                printf("A cidade vencedora é: %s\n", cidade2);
            }
            break;
        case 4:
            if (pontosturisticos > pontosturisticos2)
            {
                printf("Carta 1 venceu, por maior Pontos Turisticos!\n");
                printf("A cidade vencedora é: %s\n", cidade);
            }
            else if (pontosturisticos2 > pontosturisticos) 
            {
                printf("Carta 2 venceu, por maior Pontos Turisticos!\n");
                printf("A cidade vencedora é: %s\n", cidade2);
            }
            break;
        case 5:
            if (densidade < densidade2)
            {
                printf("Carta 1 venceu, por menor Densidade!\n");
                printf("A cidade vencedora é: %s\n", cidade);
            }
            else if (densidade2 < densidade)
            {
                printf("Carta 2 venceu, por menor Densidade!\n");
                printf("A cidade vencedora é: %s\n", cidade2);
            }
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
}


