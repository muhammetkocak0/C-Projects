#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char sayi[900] = {NULL};
    char *ptr = sayi;
    scanf(" %s",sayi);
    double sayi2[250]={0};
    int islemler[250]={0};
    int islem_aktifligi[250] = {NULL};
    int sayiaktifligi[250] = {NULL};
    double sonuc=0;
    double sayi2_yedek[250]={0};
    int sayi2_basamak[250]={NULL};
    int sayi_sayisi = 0;
    int sayac=0;
    int cikma_donguden = 0;
    double virgullu_sayilar;
    double virgullu_sayilar_yedek;
for(int i = 0;i<999; i++)
   {
         if(*(ptr+i)== '*' )
         {
        islemler[sayi_sayisi] = 4;
        islem_aktifligi[sayi_sayisi]=1;
        sayi_sayisi++;
         }
        if(*(ptr+i)== '/' )
         {
        islemler[sayi_sayisi] = 3;
        islem_aktifligi[sayi_sayisi] = 1;
        sayi_sayisi++;
         }
      if(*(ptr+i)!= '*' &&  *(ptr+i)!= '+' &&  *(ptr+i)!= '-' && *(ptr+i)!= '/' && *(ptr+i)!= '='&& *(ptr+i)!= '.'&&sayac<=0  )
        {
                  if(*(ptr+i-1)!= '.' )
                {
                sayi2[sayi_sayisi] = (double)atoi(ptr+i);
                sayiaktifligi[sayi_sayisi]=1;
                sayi2_yedek[sayi_sayisi] = (double)atoi(ptr+i);
                if(*(ptr+i-1)== '-' )
                {
                    sayi2[sayi_sayisi] *= -1;
                }
                sayi2_yedek[sayi_sayisi] = sayi2[sayi_sayisi];
                if(sayi2[sayi_sayisi]>0)
                {
                for(sayac = 0; sayi2_yedek[sayi_sayisi]>1; sayac++)
                {
                    sayi2_yedek[sayi_sayisi] /=10;
                }
                }
                else
                {
                for(sayac = 0; sayi2_yedek[sayi_sayisi]<-1; sayac++)
                {
                    sayi2_yedek[sayi_sayisi] /=10;
                }
                }
                sayac++;
                sayi_sayisi++;
                }

                else
                {
                    virgullu_sayilar=  (double)atoi(ptr+i);
                    virgullu_sayilar_yedek = (double)atoi(ptr+i);

                    for(sayac = 0; virgullu_sayilar_yedek>1; sayac++)
                    {
                    virgullu_sayilar_yedek /=10;
                    }
                        if(sayi2[sayi_sayisi-1]<0 && sayi2[sayi_sayisi-1]!=0 )
                        {
                           sayi2[sayi_sayisi-1] -= virgullu_sayilar/pow(10,sayac);
                        }

                        else if(sayi2[sayi_sayisi-1]>0 && sayi2[sayi_sayisi-1]!=0 )
                        {
                           sayi2[sayi_sayisi-1] += virgullu_sayilar/pow(10,sayac);
                        }

                        else if(sayi2[sayi_sayisi-1]==0 && *(ptr+i-1)=='.' && *(ptr+i-3)=='-' )
                        {
                           sayi2[sayi_sayisi-1] -= virgullu_sayilar/pow(10,sayac);
                        }
                        else if(sayi2[sayi_sayisi-1]>=0.00000000000001 || sayi2[sayi_sayisi-1]==0 )
                        {
                           sayi2[sayi_sayisi-1] += virgullu_sayilar/pow(10,sayac);
                        }
                }
        }
           sayac--;
        if(*(ptr+i)== '=')
        {
            break;
        }
   }

for(int i = 0; i<99; i++)
{
    if(islemler[i] == 4 && islem_aktifligi[i]==1)
    {
        for(int a = i; a>=0; a--)
        { if(sayiaktifligi[a] == 1)
            {
                for(int x = i; x<99; x++)
                {
                    if(sayiaktifligi[x]==1)
                    {
                        sayi2[x]= sayi2[a] * sayi2[x];
                        sayiaktifligi[a]=0;
                        cikma_donguden = 1;
                        break;
                    }
                }
                if(cikma_donguden==1)
                {
                    cikma_donguden = 0;
                    break;
                }
            }
        }
    }

    if(islemler[i] == 3&& islem_aktifligi[i]==1)
    {
        for(int a = i; a>=0; a--)
        { if(sayiaktifligi[a] == 1)
            {
                for(int x = i; x<99; x++)
                {
                    if(sayiaktifligi[x]==1)
                    {
                        sayi2[x]= sayi2[a] / sayi2[x];
                        sayiaktifligi[a]=0;
                        cikma_donguden = 1;
                        break;
                    }
                }
                if(cikma_donguden==1)
                {
                    cikma_donguden = 0;
                    break;
                }            }
        }

    }
}

for(int i = 0; i<999; i++)
{
        if(sayiaktifligi[i]==1)
    {
        sonuc += sayi2[i];
    }
}

printf("SONUC = %f \n",sonuc);
    return 0;
}
