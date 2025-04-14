#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    // variaveis
    //carta 01
    char Estado1[3];
    char codigo_Carta1[10];
    char Nome_cidade1[100];
    int Popula1;
    float Area_km1;
    float Pib1;
    int Pon_Turis1;
    float Dencidade1, PibperCapt1;
    float superPoder1;
    // carta 02
    char Estado2[3];
    char codigo_Carta2[10];
    char Nome_cidade2[100];
    int Popula2;
    float Area_km2;
    float Pib2;
    int Pon_Turis2;
    float Dencidade2, PibperCapt2;
    float superPoder2;

    // inserção das cartas

    printf("Ola, vamos prencher suas cartas\n");

    printf("Digite a abreviasao do estado: ");
    scanf("%s", Estado1);
    while (getchar() != '\n');

    printf("Codigo: ");
    scanf("%s",codigo_Carta1);
    while (getchar() != '\n');

    printf("Nome da cidade: ");
    fgets(Nome_cidade1, sizeof(Nome_cidade1), stdin);
    Nome_cidade1[strcspn(Nome_cidade1, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &Popula1);
    while (getchar() != '\n');

    printf("Arae em Km²:");
    scanf("%f", &Area_km1);
    while (getchar() != '\n');

    printf("PIB: ");
    scanf("%f", &Pib1);
    while (getchar() != '\n');

    printf("Pontos turisticos: ");
    scanf("%d", &Pon_Turis1);
    while (getchar() != '\n');

    printf("\nSegonda carta\n");

    printf("Digite a abreviasao do estado: ");
    scanf("%s", Estado2);
    while (getchar() != '\n');

    printf("Codigo: ");
    scanf("%s",codigo_Carta2);
    while (getchar() != '\n');

    printf("Nome da cidade: ");
    fgets(Nome_cidade2, sizeof(Nome_cidade2), stdin);
    Nome_cidade2[strcspn(Nome_cidade2, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &Popula2);
    while (getchar() != '\n');

    printf("Arae em Km²:");
    scanf("%f", &Area_km2);
    while (getchar() != '\n');

    printf("PIB: ");
    scanf("%f", &Pib2);
    while (getchar() != '\n');

    printf("Pontos turisticos: ");
    scanf("%d", &Pon_Turis2);
    while (getchar() != '\n');

    // calculo dencidade e pib per capto

    Dencidade1 = (float) Popula1 / Area_km1;
    Dencidade2 = (float) Popula2 / Area_km2;
    
    PibperCapt1 =(float) (Pib1 * 1000000000) / Popula1 ;
    PibperCapt2 =(float) (Pib2 * 1000000000) / Popula2 ;

    // demonstrar cartas

    printf("\nAscartas foram:\n");

    printf("\n Carta 01:\n Estado: %s\n Codigo: %s\n Cidade:%s\n Populacao: %d \n Area: %.2f Km² \n PIB: %.2f bilhoes \n Pontos Turisticos: %d \n Dencidade Populacional: %.2f\n PIB per Capto: %.2f\n ",Estado1, codigo_Carta1, Nome_cidade1, Popula1, Area_km1, Pib1, Pon_Turis1, Dencidade1, PibperCapt1);

    printf("\n Carta 02:\n Estado: %s\n Codigo: %s\n Cidade:%s\n Populacao: %d \n Area: %.2f Km² \n PIB: %.2f bilhoes \n Pontos Turisticos: %d \n Dencidade Populacional: %.2f\n PIB per Capto: %.2f\n ",Estado2, codigo_Carta2, Nome_cidade2, Popula2, Area_km2, Pib2, Pon_Turis2,Dencidade2, PibperCapt2);

    //calculo super

    superPoder1 =  Popula1 +  Area_km1 + Pib1 + Pon_Turis1 + Dencidade1 + PibperCapt1;
    superPoder2 =  Popula2 +  Area_km2 + Pib2 + Pon_Turis2 + Dencidade2 + PibperCapt2;

   

    //vencedor
    printf("A Carta vencedora em cada modalidade é:\n");
    //printf("Se resultado for 1 a carta 01 ganho \nSe o resultado for 0 a carta 02\n");

    // vencedor co  if/else
    // População
    printf("População:\n");
    printf("carta 1 - %s (%s):%d\n",Nome_cidade1, Estado1,Popula1);
    printf("carta 2 - %s (%s):%d\n",Nome_cidade2, Estado2,Popula2);
    if(Popula1>Popula2){
    printf("carta 1: %s venceu! \n",Nome_cidade1);
    }else{
        printf("carta 2: %s venceu! \n",Nome_cidade2);
    }
    //Area km²
    printf("Ara Km²:\n");
    printf("carta 1 - %s (%s):%fKm²\n",Nome_cidade1, Estado1,Area_km1);
    printf("carta 2 - %s (%s):%fKm²\n",Nome_cidade2, Estado2,Area_km2);
    if(Area_km1>Area_km2){
        printf("carta 1: %s venceu! \n",Nome_cidade1);
    }else{
        printf("carta 2: %s venceu! \n",Nome_cidade2);
    }
    //PIB
    printf("PIB:\n");
    printf("carta 1 - %s (%s):%f Bilhões de Reais\n",Nome_cidade1, Estado1,Pib1);
    printf("carta 2 - %s (%s):%f Bilhões de Reais\n",Nome_cidade2, Estado2,Pib2);
    if(Pib1>Pib2){
        printf("carta 1: %s venceu! \n",Nome_cidade1);
    }else{
        printf("carta 2: %s venceu! \n",Nome_cidade2);
    }
    
    // Pontos turisticos
    printf("Pontos turisticos:\n");
    printf("carta 1 - %s (%s):%d\n",Nome_cidade1, Estado1,Pon_Turis1);
    printf("carta 2 - %s (%s):%d\n",Nome_cidade2, Estado2,Pon_Turis2);
    if(Pon_Turis1>Pon_Turis2){
        printf("carta 1: %s venceu! \n",Nome_cidade1);
    }else{
        printf("carta 2: %s venceu! \n",Nome_cidade2);
    }

    //Densidade populacional
    printf("Densidade populacional\n");
    printf("carta 1 - %s (%s):%fhab/Km²\n",Nome_cidade1, Estado1,Dencidade1);
    printf("carta 2 - %s (%s):%fhab/Km²\n",Nome_cidade2, Estado2,Dencidade2);
    if(Dencidade1<Dencidade2){
        printf("carta 1: %s venceu! \n",Nome_cidade1);
    }else{
        printf("carta 2: %s venceu! \n",Nome_cidade2);
    }

    //Pib per capto
    printf("PIB per capto:\n");
    printf("carta 1 - %s (%s):R$ %f\n",Nome_cidade1, Estado1,PibperCapt1);
    printf("carta 2 - %s (%s):R$ %f\n",Nome_cidade2, Estado2,PibperCapt2);
    if(PibperCapt1>PibperCapt2){
        printf("carta 1: %s venceu! \n",Nome_cidade1);
    }else{
        printf("carta 2: %s venceu! \n",Nome_cidade2);
    }
   
    //Super poder
    printf("Super poder:\n");
    printf("carta 1 - %s (%s):%f\n",Nome_cidade1, Estado1,superPoder1);
    printf("carta 2 - %s (%s):%f\n",Nome_cidade2, Estado2,superPoder2);
    if(superPoder1>superPoder2){
        printf("carta 1: %s venceu! \n",Nome_cidade1);
    }else{
        printf("carta 2: %s venceu! \n",Nome_cidade2);
    }

    return 0;
}