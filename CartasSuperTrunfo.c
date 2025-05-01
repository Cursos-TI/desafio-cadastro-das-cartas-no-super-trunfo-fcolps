// Deesafio nível novato
// estudante: Francisco Lucas do Nascimento Lopes;
// curso: Análise e Desenvolvimento de Sistemas;

#include <stdio.h>

int main (){
// declarando as variáveis:
char estado1, estado2, cidade1[30], cidade2[30], codigo1[5], codigo2[5];
int populacao1,populacao2, turismo1, turismo2;
float area1, area2, pib1, pib2; 
// coletando informações do usuário
printf ("olá, para o cadastramento das cartas, por favor, preencha o que se pede.\n");
printf ("Escreva a letra (entre A e H) que corresponderá a carta da cidade 1:\n");
scanf ("%c", &estado1);

printf("ótimo!! Agora escreva a letra que corresponderá a carta da cidade 2: \n");
scanf (" %c", &estado2);

printf("perfeito!\n");

printf("agora, digite o código da carta da cidade 01: \n");
scanf("%s", codigo1);

printf("Muito bom !! Agora,digite o código da carta da cidade 2 (diferente da anterior, por favor): \n");
scanf("%s", codigo2);

printf ("Excelente! Agora digite o nome da cidade:\n");
scanf ("%s", cidade1);

printf ("Agora escreva nome da segunda cidade: \n");
scanf ("%s", cidade2);

printf ("Agora escreva a quantidade de habitantes que residem na cidade da carta 01:\n");
scanf ("%i", &populacao1);

printf ("Agora escreva a quantidade de habitantes que residem na cidade da carta 02:\n");
scanf ("%i", &populacao2);

printf ("Agora escreva a quantidade de pontos turísticos na cidade da carta 01:\n");
scanf ("%i", &turismo1);

printf ("Agora escreva a quantidade de pontos turísticos na cidade da carta 02:\n");
scanf ("%i", &turismo2);

printf ("Agora escreva a área (em km^2) da cidade da carta 01:\n");
scanf ("%f", &area1);

printf ("Agora escreva a área (em Km^2) a cidade da carta 02:\n");
scanf ("%f", &area2);

printf ("Agora escreva o PIB (produto interno bruto) da cidade da carta 01:\n");
scanf ("%f", &pib1);

printf ("Agora escreva o PIB (produto interno bruto) cidade da carta 02:\n");
scanf ("%f", &pib2);

printf ("Perfeito!! terminamos o cadastrado. segue abaixo as informações cadastradas: \n");

printf ("---> carta 01:\n");
printf ("estado: ");
printf ("%c \n", estado1 );
printf ("Código: ");
printf ("%s \n", codigo1);
printf ("Nome da cidade: ");
printf ("%s \n", cidade1);
printf ("Quantidade de habitantes: ");
printf ("%i \n", populacao1);
printf ("Quantidade de pontos tutísticos: ");
printf ("%i \n", turismo1);
printf ("Pib: ");
printf ("%f \n", pib1);
printf ("Área em km^2: ");
printf ("%f \n", area1);

printf ("---> carta 02:\n");
printf ("estado: ");
printf ("%c \n", estado2 );
printf ("Código: ");
printf ("%s \n", codigo2);
printf ("Nome da cidade: ");
printf ("%s \n", cidade2);
printf ("Quantidade de habitantes: ");
printf ("%i \n", populacao2);
printf ("Quantidade de pontos tutísticos: ");
printf ("%i \n", turismo2);
printf ("Pib: ");
printf ("%f \n", pib2);
printf ("Área em km^2: ");
printf ("%f \n", area2);
return 0;

}