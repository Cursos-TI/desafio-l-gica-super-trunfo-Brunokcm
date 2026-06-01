#include <stdio.h>

int main (){ 

float soma;
float divisao;
float divisao2;
float divisao3;
float divisao4;

float superpoder1;
float superpoder2;
int Escolhadecartas;


// carta 1
char estado1[50];
char codigo1[50];
char cidade1[50];
unsigned long int populacao1;
float area1;
float PIB1;
int numero_de_pontos_turisticos1;
float densidade_populacional1;
float PIB_per_capita1;

// carta 2
char estado2[50];
char codigo2[50];
char cidade2[50];
unsigned long int populacao2;
float area2;
float PIB2;
int numero_de_pontos_turisticos2;
float densidade_populacional2;
float PIB_per_capita2;

printf("Carta 1: \n");

printf("digite o estado(ex de A a H):\n");
scanf("%s", &estado1);

printf("digite o codigo(ex a01):\n");
scanf(" %[^\n]s", &codigo1);

printf("digite a cidade:\n");
scanf(" %[^\n]s", cidade1);

printf("digite a populacao:\n");
scanf("%lu", &populacao1);

printf("digite a area em km2:\n");
scanf("%f", &area1);

printf("digite o PIB em bilhoes:\n");
scanf("%f", &PIB1);

printf("digite o numero de pontos turisticos:\n");
scanf("%d", &numero_de_pontos_turisticos1);

printf("Carta 2: \n");

printf("digite o estado(ex de A a H):\n");
scanf("%s", &estado2);

printf("digite o codigo(ex b01):\n");
scanf("%s", &codigo2);

printf("digite a cidade:\n");
scanf(" %[^\n]s", &cidade2);

printf("digite a populacao:\n");
scanf("%lu", &populacao2);

printf("digite a area em km2:\n");
scanf("%f", &area2);

printf("digite o PIB em bilhoes:\n");
scanf("%f", &PIB2);

printf("digite o numero de pontos turisticos:\n");
scanf("%d", &numero_de_pontos_turisticos2);

printf("\n\n--- Carta 1 Cadastrada ---\n");
printf("Estado: %s\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("Populacao: %lu\n", populacao1);
printf("Area: %.2f km2\n", area1);
printf("PIB: %.2f bilhoes\n", PIB1);
printf("Numero de Pontos Turisticos: %d\n", numero_de_pontos_turisticos1);
densidade_populacional1 = populacao1 / area1;
printf("a Densidade Populacional e: %.2f habi/km2\n", densidade_populacional1);
PIB_per_capita1 = PIB1 *1000000000/ populacao1;
printf("O PIB per capita e: %.2f reais\n", PIB_per_capita1);
superpoder1 = (populacao1) + (area1) + (PIB1) + (numero_de_pontos_turisticos1) -(densidade_populacional1) + (PIB_per_capita1);
printf("O Superpoder da carta 1 e: %.2f\n", superpoder1);


printf("\n\n--- Carta 2 Cadastrada ---\n");
printf("Estado: %s\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("Populacao: %lu\n", populacao2);
printf("Area: %.2f km2\n", area2);
printf("PIB: %.2f bilhoes\n", PIB2);
printf("Numero de Pontos Turisticos: %d\n", numero_de_pontos_turisticos2);
densidade_populacional2 = populacao2 / area2;
printf("a Densidade Populacional e: %.2f habi/km2\n", densidade_populacional2);
PIB_per_capita2 = PIB2 *1000000000/ populacao2;
printf("O PIB per capita e: %.2f reais\n", PIB_per_capita2);
superpoder2 = (populacao2) + (area2) + (PIB2) + (numero_de_pontos_turisticos2) - (densidade_populacional2) + (PIB_per_capita2);
printf("O Superpoder da carta 2 e: %.2f\n\n", superpoder2);

printf("**** Comparacao entre as cartas, escolha de 1 a 8 para comparar ****\n");
printf("**** 1 - Populacao - **** \n");
printf("**** 2 - Area - **** \n");
printf("**** 3 - PIB - **** \n");
printf("**** 4 - Numero de Pontos Turisticos - **** \n");
printf("**** 5 - Densidade Populacional - **** \n");
printf("**** 6 - PIB per capita - **** \n");
printf("**** 7 - Superpoder - **** \n");
printf("**** 8 - opçao invalida - ****\n\n");
scanf("%d", &Escolhadecartas);

switch (Escolhadecartas)
{
case 1:
    printf("Cidade: %s\n", cidade1);
    printf("Cidade: %s\n", cidade2);
    printf("Categoria Populaçao\n");
    printf("O resultado da carta 1 é: %lu\n", populacao1);
    printf("O resultado da carta 2 é: %lu\n", populacao2);
    
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu !\n");
    }else if(populacao1 < populacao2){
        printf("carta 2 venceu !\n");
    }else
        printf("Empate\n");

    break;

case 2:
    printf("Cidade: %s\n", cidade1);
    printf("Cidade: %s\n", cidade2);
    printf("Categoria Area\n");
    printf("O resultado da carta 1 é: %.2f\n", area1);
    printf("O resultado da carta 2 é: %.2f\n", area2);

    if (area1 > area2) {
         printf("Carta 1 venceu na categoria Area!\n");
    }else if(area1 < area2){
         printf("carta 2 venceu na categoria Area!\n");
    }else
         printf("Empate\n");

    break;

case 3:
    printf("Cidade: %s\n", cidade1);
    printf("Cidade: %s\n", cidade2);
    printf("Categoria PIB\n");
    printf("O resultado da carta 1 é: %.2f\n", PIB1);
    printf("O resultado da carta 2 é: %.2f\n", PIB2);

    if (PIB1 > PIB2) {
         printf("Carta 1 venceu na categoria PIB!\n");
    }else if(PIB1 < PIB2){
         printf("carta 2 venceu na categoria PIB!\n");
    }else
         printf("Empate\n");

    break;

case 4:
    printf("Cidade: %s\n", cidade1);
    printf("Cidade: %s\n", cidade2);
    printf("Categoria Pontos Turisticos\n");
    printf("O resultado da carta 1 é: %d\n", numero_de_pontos_turisticos1);
    printf("O resultado da carta 2 é: %d\n", numero_de_pontos_turisticos2);

    if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) {
         printf("Carta 1 venceu na categoria Pontos turisticos!\n");
    }else if(numero_de_pontos_turisticos1 < numero_de_pontos_turisticos2){
         printf("carta 2 venceu na categoria Pontos turisticos!\n");
    }else
         printf("Empate\n");

    break;

case 5:
    printf("Cidade: %s\n", cidade1);
    printf("Cidade: %s\n", cidade2);
    printf("Categoria Densidade Populacional\n");
    printf("O resultado da carta 1 é: %.2f\n", densidade_populacional1);
    printf("O resultado da carta 2 é: %.2f\n", densidade_populacional2);

    if (densidade_populacional1 < densidade_populacional2) {
        printf("Carta 1 venceu na categoria Densidade Populacional!\n");
    }else if(densidade_populacional1 > densidade_populacional2){
        printf("carta 2 venceu na categoria Densidade Populacional!\n");
    }else
        printf("Empate\n");

    break;
    
case 6:
    printf("Cidade: %s\n", cidade1);
    printf("Cidade: %s\n", cidade2);
    printf("Categoria PIB Per Capita\n");
    printf("O resultado da carta 1 é: %.2f\n", PIB_per_capita1);
    printf("O resultado da carta 2 é: %.2f\n", PIB_per_capita2);

    if (PIB_per_capita1 > PIB_per_capita2) {
        printf("Carta 1 venceu na categoria Pib Per Capita!\n");
    }else if(PIB_per_capita1 < PIB_per_capita2){
        printf("carta 2 venceu na categoria Pib Per Capita!\n");
    }else
        printf("Empate\n");

    break;

case 7:
    printf("Cidade: %s\n", cidade1);
    printf("Cidade: %s\n", cidade2);
    printf("Categoria Super Poder\n");
    printf("O resultado da carta 1 é: %f\n", superpoder1);
    printf("O resultado da carta 2 é: %f\n", superpoder2);

    if (superpoder1 > superpoder2) {
        printf("Carta 1 venceu na categoria Super Poder!\n");
    }else if(superpoder1 < superpoder2){
        printf("carta 2 venceu na categoria Super Poder!\n");
    }else
        printf("Empate\n");

    break;


default:
    printf("Opçao invalida\n");

}
 


}
