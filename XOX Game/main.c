#include <stdio.h>
#include "function.h"
#include "function.c"
#define SIZE 9


int main()
{
char choice;
printf("PC or MULTIPLAYER?   (P/M)");
scanf(" %c",&choice);



if(choice=='P')
{
char choice1;
printf("easy or hard mode? E/H  ");
scanf(" %c",&choice1);
if(choice1=='E')
{


    char grid[SIZE] = {'0', '1', '2', '3', '4', '5', '6', '7', '8' };
char currentPlayer,insansecimi;
printf(" X mi olmak istiyorsunuz O mu? \n");

scanf(" %c",&currentPlayer);
insansecimi=currentPlayer;




int counter = 0, done = 0;
drawGrid( grid );
while( !done )
{
pcturneasy(grid, &currentPlayer,&insansecimi );
drawGrid( grid );
done = checkForWinner( grid, counter, &currentPlayer );
swapPlayer( &currentPlayer );
counter++;
}





}


else if(choice1=='H')
{


    char grid[SIZE] = {'0', '1', '2', '3', '4', '5', '6', '7', '8' };
char currentPlayer,insansecimi;
printf(" X mi olmak istiyorsunuz O mu? \n");

scanf(" %c",&currentPlayer);
insansecimi=currentPlayer;




int counter = 0, done = 0;
drawGrid( grid );
while( !done )
{
pcturnhard(grid, &currentPlayer,&insansecimi );
drawGrid( grid );
done = checkForWinner( grid, counter, &currentPlayer );
swapPlayer( &currentPlayer );
counter++;
}

   FILE *dosyaninadresi;
  fputc('A',dosyaninadresi);
     fclose(dosyaninadresi);
     dosyaninadresi = fopen("C:\\Users\\PC\\Desktop\\version22\\sonhal.txt","a");





}










}





else if(choice == 'M')
{



















    char grid[SIZE] = {'0', '1', '2', '3', '4', '5', '6', '7', '8' };
char currentPlayer;
printf("1. oyuncu X mi olsun O mu? \n");

scanf(" %c",&currentPlayer);





int counter = 0, done = 0;
drawGrid( grid );
while( !done )
{
takeTurn( grid, &currentPlayer );
drawGrid( grid );
done = checkForWinner( grid, counter, &currentPlayer );
swapPlayer( &currentPlayer );
counter++;
}




}

}
