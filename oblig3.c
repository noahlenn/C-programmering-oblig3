#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"

int lesInn(void);
void trekk(int[]);
void skrivUt(int[]);
void sorterRekke(int[]);

int main()
{
  srand(time(NULL));
  int liste[7] = { 0 };
  int tabell = lesInn();
  
  for (int i = 0; i < tabell; i++)
  {
    printf("\n");
    trekk(liste);
    sorterRekke(liste);
    skrivUt(liste);
  }
  
  printf("\n\n\n");
  
  return 0;
  }


int lesInn(void) 
{
  int dinerekker;
  printf("Hvor mange rekker \x9Bnsker du?\n");
  scanf("%d", &dinerekker);
  return dinerekker;
}


void trekk(int trk[7]) 
{
  for (int a = 0; a <= 6; a++) 
  {
    int tilfeldigtall = rand() % 34 + 1;
    trk[a] = tilfeldigtall;
  }

  for (int b = 0; b <= 6; b++) 
  {
    for (int x = 0; x <= 6; x++) 
    {
      if ((trk[b] == trk[x]) && (b != x)) 
      {
        int tilfeldigtall = rand() % 34 + 1;
        trk[b] = tilfeldigtall;
      }
    }
  }
}


void sorterRekke(int rkk[])
{
  int ut;
  int inn;
  int temp;
  
  for (ut = 0; ut < 7; ut++)
  {
    for (inn = 0; inn < 6; inn++)
    {
      if (rkk[inn] > rkk[inn + 1])
      {
        temp = rkk[inn];
        rkk[inn] = rkk[inn + 1];
        rkk[inn + 1] = temp;
      }
    }
  }
}


void skrivUt(int y[]) 
{
  for (int z = 0; z <= 6; z++) 
  {
    printf("%5d ", y[z]);
  }
}
