#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char nomecidade1[30], nomecidade2[30];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;

  
  // Área para entrada de dados
  //CARTA 1
  printf("Insira os dados da primeira carta: \n");
  printf("Estado (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);
  printf("Código da carta (Letra do estado seguido de um n° de 01 a 04): ");
    scanf(" %s", codigo1);
  printf("Nome da cidade: ");
    scanf(" %[^\n]", nomecidade1);
  printf("População da cidade: ");
    scanf(" %d", &populacao1);
  printf("Área (em km²): ");
    scanf(" %f", &area1);
  printf("PIB: ");
    scanf(" %f", &pib1);
  printf("N° de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);


  //CARTA 2
  printf("Insira os dados da segunda carta: \n");
   printf("Estado (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);
  printf("Código da carta (Letra do estado seguido de um n° de 01 a 04): ");
    scanf(" %s", codigo2);
  printf("Nome da cidade: ");
    scanf(" %[^\n]", nomecidade2);
  printf("População da cidade: ");
    scanf(" %d", &populacao2);
  printf("Área (em km²): ");
    scanf(" %f", &area2);
  printf("PIB: ");
    scanf(" %f", &pib2);
  printf("N° de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);



  // Área para exibição dos dados da cidade
  //CARTA 1

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População da cidade: %d\n", populacao1);
    printf("Área (em km²): %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("N° de pontos turísticos: %d\n", pontosTuristicos1);

//carta 2

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População da cidade: %d\n", populacao2);
    printf("Área (em km²): %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("N° de pontos turísticos: %d\n", pontosTuristicos2);

  
return 0;
} 
