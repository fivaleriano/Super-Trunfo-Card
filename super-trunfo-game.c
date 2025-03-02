#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

// Variaveis para comparação entre cartas do jogador 1 vs jogador 2.

char estado[3], estado02[3];
char codigocarta[5], codigocarta02[5];
char nomecidade[50], nomecidade02[50];
float populacao, populacao02;
float area, area02;
float pib, pib02;
int npt, npt02;
float sp, sp2;
int opcao1;

// Abaixo e exibido o menu interativo do jogo super trunfo!

printf("Menu Principal\n");
printf("1. Iniciar Jogo: 1P vs 2P\n");
printf("2. Iniciar Jogo: 1P vs Computador\n");
printf("3. Ver Regras\n");
printf("4. Sair\n");
printf("Escolha uma opção: ");
scanf("%d", &opcao1);

/*

Esse switch abaixo e ativado quando o jogador decide iniciar um novo game no modo 1P vs 2P.

*/

switch (opcao1){
case 1:
printf("###### INICO DO JOGO SUPER TRUNFO! ######\n");

printf("###### Preencha os dados das cartas do jogador 01 ######\n");


                   // Preenchimento dos dados das cartas jogador 1.

printf("Digite a UF do estado:\n");
    scanf(" %s", &estado);

printf("Digite o código da carta:\n");
    scanf(" %s", &codigocarta);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", &nomecidade);

printf("Digite o numero de habitantes da cidade:\n");
    scanf("%f", &populacao);

printf("Digite o tamanho da área da cidade:\n");
    scanf("%f", &area);

printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib);

printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &npt);



            // Preenchimento dos dados das cartas jogador 2.

printf("###### Preencha os dados das cartas do jogador 02 ######\n");

printf("Digite a UF do estado:\n");
    scanf(" %s", &estado02);

printf("Digite o código da carta:\n");
    scanf(" %s", &codigocarta02);

printf("Digite o nome da cidade:\n");
    scanf(" %s", &nomecidade02);

printf("Digite o numero de habitantes da cidade:\n");
    scanf("%f", &populacao02);

printf("Digite o tamanho da área da cidade:\n");
    scanf("%f", &area02);

printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib02);

printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &npt02);

float dp, dp2;  // variavel para calcular Densidade populacional.

           // Calculo da Densidade populacional do jogador 1.

dp = populacao / area;


           // Calculo da Densidade populacional do jogador 2.

dp2 = populacao02 / area02;




            //Exibição dos dados das cartas ja preenchidas do jogador 1.

printf("###### Dados da carta do jogador 01 ######\n");

printf("Estado: %s\nCodigo da carta: %s\nNome da cidade: %s\nPopulação: %.2f\n", estado, codigocarta, nomecidade, populacao);
printf("Área: %.2f km²\nPIB: R$ %.2f bilhoes de reais\nNumero de pontos turisticos: %d\n", area, pib, npt);
printf("Densidade populacional: %.2f pessoas/km²\n", dp);



            //Exibição dos dados das cartas ja preenchidas do jogador 2.

printf("###### Dados da carta do jogador 02 ######\n");

printf("Estado: %s\nCodigo da carta: %s\nNome da cidade: %s\nPopulação: %.2f\n", estado02, codigocarta02, nomecidade02, populacao02);
printf("Área: %.2f km²\nPIB: R$ %.2f bilhoes de reais\nNumero de pontos turisticos: %d\n", area02, pib02, npt02);
printf("Densidade populacional: %.2f pessoas/km²\n", dp2);



            // Comparação entre os dados da primeira e segunda carta.


printf("###### Escolha qual dados das cartas voçê quer comparar ######\n");

int opcao;  // Variavel para criação de menu para escolha de comparação.

printf("Digite 1 para comparar a população das cartas\n");
printf("Digite 2 para comparar a Area das cartas\n");
printf("Digite 3 para comparar o PIB das cartas\n");
printf("Digite 4 para comparar o Numero de pontos turisticos das cartas\n");
printf("Digite 5 para comparar a Densidade populacional das cartas\n");
printf("Escolha a opção para comparar:\n");
scanf("%d", &opcao);

/*

Nesse swicht abaixo acontece a comparação dos atributos pre selecionado pelo jogador.
todas as comparações validas são definidas em cada 'case' numerados de 1 a 7.

*/

switch (opcao) {
    case 1:                                    // nesse 'case 1' ele faz a comparação de população.
        if(populacao == populacao02){
            printf("######  Jogo Empatou  ######");
        }else if(populacao > populacao02){
            printf("Comparação de cartas (Atributo: População):\n");
            printf("Carta 1 - %s - População: %.2f\n", nomecidade, populacao);
            printf("Carta 2 - %s - População: %.2f\n", nomecidade02, populacao02);
            printf("Resultado: Carta 1 %s venceu!\n", nomecidade);
        }else {
            printf("Comparação de cartas (Atributo: População):\n");
            printf("Carta 1 - %s - População: %.2f\n", nomecidade, populacao);
            printf("Carta 2 - %s - População: %.2f\n", nomecidade02, populacao02);
            printf("Resultado: Carta 2 %s venceu!\n", nomecidade02);
        }
        break;
    case 2:                                  // nesse 'case 2' ele faz a comparação de Area.     
        if(area == area02){
            printf("######  Jogo Empatou  ######");
        }else if(area > area02){
            printf("Comparação de cartas (Atributo: Area):\n");
            printf("Carta 1 - %s - Area: %.2f\n", nomecidade, area);
            printf("Carta 2 - %s - Area: %.2f\n", nomecidade02, area02);
            printf("Resultado: Carta 1 %s venceu!\n", nomecidade);
        }else {
            printf("Comparação de cartas (Atributo: Area):\n");
            printf("Carta 1 - %s - Area: %.2f\n", nomecidade, area);
            printf("Carta 2 - %s - Area: %.2f\n", nomecidade02, area02);
            printf("Resultado: Carta 2 %s venceu!\n", nomecidade02);
        }
        break;
    case 3:                                  // nesse 'case 3' ele faz a comparação de PIB.
        if(pib == pib02){
            printf("######  Jogo Empatou  ######");
        }else if(pib > pib02){
            printf("Comparação de cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s - PIB: %.2f\n", nomecidade, pib);
            printf("Carta 2 - %s - PIB: %f\n", nomecidade02, pib02);
            printf("Resultado: Carta 1 %s venceu!\n", nomecidade);
        }else {
            printf("Comparação de cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s - PIB: %.2f\n", nomecidade, pib);
            printf("Carta 2 - %s - PIB: %.2f\n", nomecidade02, pib02);
            printf("Resultado: Carta 2 %s venceu!\n", nomecidade02);
        }
        break;
    case 4:                                  // nesse 'case 4' ele faz a comparação do Numero de pontos turisticos.
        if (npt == npt02){
            printf("######  Jogo Empatou  ######");
        }else if(npt > npt02){
            printf("Comparação de cartas (Atributo: Numero de pontos turisticos):\n");
            printf("Carta 1 - %s - Numero de pontos turisticos: %.2f\n", nomecidade, npt);
            printf("Carta 2 - %s - Numero de pontos turisticos: %.2f\n", nomecidade02, npt02);
            printf("Resultado: Carta 1 %s venceu!\n", nomecidade);
        }else{
            printf("Comparação de cartas (Atributo: Numero de pontos turisticos):\n");
            printf("Carta 1 - %s - Numero de pontos turisticos: %.2f\n", nomecidade, npt);
            printf("Carta 2 - %s - Numero de pontos turisticos: %.2f\n", nomecidade02, npt02);
            printf("Resultado: Carta 2 %s venceu!\n", nomecidade02);
        }
        break;
    case 5:                                 // nesse 'case 5' ele faz a comparação do Densidade populacional.
        if (dp == dp2){
            printf("######  Jogo Empatou  ######");
        }else if(dp < dp2){
            printf("Comparação de cartas (Atributo: Densidade populacional):\n");
            printf("Carta 1 - %s - Densidade populacional: %.2f\n", nomecidade, dp);
            printf("Carta 2 - %s - Densidade populacional: %.2f\n", nomecidade02, dp2);
            printf("Resultado: Carta 1 %s venceu!\n", nomecidade);
        }else{
            printf("Comparação de cartas (Atributo: Densidade populacional):\n");
            printf("Carta 1 - %s - Densidade populacional: %.2f\n", nomecidade, dp);
            printf("Carta 2 - %s - Densidade populacional: %.2f\n", nomecidade02, dp2);
            printf("Resultado: Carta 2 %s venceu!\n", nomecidade02);
        }
        break;

        default:
      printf("Escolha inválida!\n");             // esse printf e ativado quando o jogador seleciona um numero ou uma opção invalida. 
}

break;

/*

nesse 'case 2' abaixo acontece umas das opçãos selecionadas no inicio do menu 
mas por enquanto essa opção ainda esta em desemvolvimento!

*/

case 2:
printf("Desculpe... este modo de jogo ainda esta em desemvolvimento!");

break;

/*

nesse 'case 3' voce pode visualizar as regras do jogo porem esta ainda em desolvolvimento
essas saõ somente regras padroes que podem ser atulizadas e melhoradas durante o desemvolvimento do game
adicinando swicht para selecionar que tipo de regra o jogador quer ler.

*/

case 3:
printf("Regras do Jogo:\n");
printf("1. Escolha uma opção no menu.\n");
printf("2. Se você escolher 'Iniciar Jogo', um jogo de cartas se iniciara e voçê deve preencher os dados das cartas, para comparar e saber qual carta e a vencedora.\n");
printf("3. O jogo termina quando você escolhe 'Sair'.\n");

break;

/*

nesse 'case 4' abaixo ele e ativado quando o jogador decider sair do game.

*/

case 4:
printf("Saindo...\n");
break;

default:
printf("Opção inválida. Tente novamente.\n"); // esse printf e ativado quando o jogador seleciona um numero ou uma opção invalida.

}


return 0;


}