#include <stdio.h>
int main(){
   char Estado1, Estado2;
   char Codigo1[5], Codigo2[5];
   char Nome_da_Cidade1[15], Nome_da_Cidade2[15];
   int Populacao1 , Populacao2;
   float Area1, Area2;
   float PIB1 , PIB2;
   int Pontos_Turisticos1, Pontos_Turisticos2;
   float Densidade_Populacional1, Densidade_Populacional2;
   float PIB_per_Capita1, PIB_per_Capita2;


   printf("Estado1 \n");
   scanf(" %c", &Estado1);

   printf("Codigo1 \n");
   scanf("%s", &Codigo1);

   printf("Nome_da_Cidade1 \n");
   scanf("%s", &Nome_da_Cidade1);

   printf("População1 \n");
   scanf("%d", &Populacao1);

   printf("Area1 \n");
   scanf("%f", &Area1);

   printf("PIB1 \n");
   scanf("%f", &PIB1);

   printf("Pontos_Turisticos1 \n");
   scanf("%d", &Pontos_Turisticos1);

   Densidade_Populacional1 = Populacao1 / Area1;

   PIB_per_Capita1 = PIB1 / Populacao1;
   
   printf("Estado2 \n");
   scanf(" %c", &Estado2);

   printf("Codigo2 \n");
   scanf("%s", &Codigo2);

   printf("Nome_da_Cidade2 \n");
   scanf("%s", &Nome_da_Cidade2);

   printf("População2 \n");
   scanf("%d", &Populacao2);

   printf("Area2 \n");
   scanf("%f", &Area2);

   printf("PIB2 \n");
   scanf("%f", &PIB2);

   printf("Pontos_Turisticos2 \n");
   scanf("%d", &Pontos_Turisticos2);

   Densidade_Populacional2 = Populacao2 / Area2;

   PIB_per_Capita2 = PIB2 / Populacao2;

   printf("Carta 1 \n");
   printf("Estado1: %c\n", Estado1);
   printf("Codigo1: %s\n" , Codigo1);
   printf("Nome_da_Cidade1: % s\n" , Nome_da_Cidade1);
   printf("Populacao1: %d\n" , Populacao1);
   printf("Area1: %f\n" , Area1);
   printf("PIB1: %f\n" , PIB1);
   printf("Pontos_Turisticos1: %d\n" , Pontos_Turisticos1);
   printf("Densidade_Populacional1: %f\n" , Densidade_Populacional1);
   printf("PIB per Capita1: %f\n" , PIB_per_Capita1);
   
   printf("Carta 2 \n");
   printf("Estado2: %c\n", Estado2);
   printf("Codigo2: %s\n" , Codigo2);
   printf("Nome_da_Cidade2: % s\n" , Nome_da_Cidade2);
   printf("Populacao2: %d\n" , Populacao2);
   printf("Area2: %f\n" , Area2);
   printf("PIB2: %f\n" , PIB2);
   printf("Pontos_Turisticos2: %d\n" , Pontos_Turisticos2);
   printf("Densidade_Populacional2: %f\n" , Densidade_Populacional2);
   printf("PIB per Capita2: %f\n" , PIB_per_Capita2);

   return 0;


}
