#include <stdio.h>

int main (){ 

float soma;
float divisao;
float divisao2;
float divisao3;
float divisao4;

float superpoder1;
float superpoder2;

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
printf("O Superpoder da carta 2 e: %.2f\n", superpoder2);



printf("\n\n--- Comparacao entre as cartas ---\n");
if (populacao1 > populacao2) {
    printf("Carta 1 venceu na categoria Populacao!\n");
}else{
    printf("carta 2 venceu na categoria Populacao!\n");
}

if (area1 > area2) {
    printf("Carta 1 venceu na categoria Area!\n");
}else{  
    printf("Carta 2 venceu na categoria Area!\n");
}

if (PIB1 > PIB2) {
    printf("Carta 1 venceu na categoria PIB!\n");
}else{
    printf("Carta 2 venceu na categoria PIB!\n");
}

if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) {
    printf("Carta 1 venceu na categoria Numero de Pontos Turisticos!\n");
}else{
    printf("Carta 2 venceu na categoria Numero de Pontos Turisticos!\n");
}

if (densidade_populacional1 < densidade_populacional2) {
    printf("Carta 1 venceu na categoria Densidade Populacional!\n");
}else{
    printf("Carta 2 venceu na categoria Densidade Populacional!\n");
}

if (PIB_per_capita1 > PIB_per_capita2) {
    printf("Carta 1 venceu na categoria PIB per capita!\n");
}else{
    printf("Carta 2 venceu na categoria PIB per capita!\n");
}

if (superpoder1 > superpoder2) {
    printf("Carta 1 venceu na categoria Superpoder!\n");
}else if (superpoder1 < superpoder2){
    printf("Carta 2 venceu na categoria Superpoder!\n");
}

return 0;


}