#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Carta1:
    char estado1;
    char codigo1[3];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

     // Carta2:
    char estado2;
    char codigo2[3];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    
    // Cadastro das Cartas:

    printf("Cadstro carta n°1: \n");
    printf("Digite o estado: ");
    scanf("%c", &estado1);

    printf("Digite o codigo: ");
    scanf("%s", &codigo1);

    printf("Digite a cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);
    
    printf("Digite o pib: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);
    printf("Cadastro Finalizado\n");

    //Carta n°2
    printf("Cadastro carta n°2: \n");
    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo: ");
    scanf("%s", &codigo2);

    printf("Digite a cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);
    
    printf("Digite o pib: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);
    printf("Cadastro Finalizado\n");
 
    // Exibição dos Dados das Cartas:
 
    printf("Carta N°1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("Pib: %f\n", pib1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);

    printf("Carta N°2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("Pib: %f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);

    return 0;
}
