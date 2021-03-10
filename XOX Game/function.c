
int checkForWinner( char*, int, char* );
    /**  drawGrid     Draws the current state of the tic-tac-toe grid    **/
        void drawGrid( char a[] )
        { system("cls");
            printf( "\n" );
            printf( " %c | %c | %c \n", a[0], a[1], a[2] );
            printf( "---|---|---\n");
            printf( " %c | %c | %c \n", a[3], a[4], a[5] );
            printf( "---|---|---\n");
            printf( " %c | %c | %c \n", a[6], a[7], a[8] );
            printf("\n");
        }



               void pcturnhard( char a[], char *playerPtr, char *insansecimi  )
        {


            if(*playerPtr==*insansecimi)
            {
               int available[8];
            int i, j = 0, choice;
            for(i = 0; i < 9; i++ )
                if( (a[i] != 'X') && (a[i] != 'O')  )
                available[ j++ ] = i;

            printf( "\n It is %c's turn.  Choose your move (", *playerPtr );

            for( i = 0; i < j; i++ )
                printf( " %d", available[i]);
            printf( " ): ");
            scanf( "%d", &choice);

            while((a[choice] == 'X') || (a[choice] == 'O'))
            {

                printf("Invalid move try choose ");
                scanf( "%d", &choice);

                                            }





            if( *playerPtr == 'X' )      a
                [ choice ] = 'X';
            else
                a[ choice ] = 'O';
            }

            else if(*playerPtr!=*insansecimi)
              {
               int available[8];
            int i,b, j = 0, choice;
            int kontrol = 4;
            for(i = 0; i < 9; i++ )
                if( (a[i] != 'X') && (a[i] != 'O')  )
                available[ j++ ] = i;

            printf( "\n It is PC's turn.  Choose your move (" );

            for( i = 0; i < j; i++ )
                printf( " %d", available[i]);
            printf( " ): ");


if(a[4]=='4')
{
     if( *playerPtr == 'X' )
                    {
                        a[4] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[4] = 'O';
                       kontrol=6;


                    }
}



for( i = 0; i<3; i++)//SALDIRI YATAY
            {
                if((a[3*i]==a[3*i+1])&& (*insansecimi!=a[3*i])&&(*insansecimi!=a[3*i+2])&&(*playerPtr!=a[3*i+2])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[3*i+2] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ 3*i+2 ] = 'O';
                       kontrol=6;


                    }
                    break;
                }

               else if((a[3*i]==a[3*i+2])&& (*insansecimi!=a[3*i])&&(*insansecimi!=a[3*i+1])&&(*playerPtr!=a[3*i+1])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[3*i+1] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ 3*i+1 ] = 'O';
                       kontrol=6;


                    }
                    break;
                }

            else if((a[3*i+2]==a[3*i+1])&& (*insansecimi!=a[3*i+2])&&(*insansecimi!=a[3*i])&&(*playerPtr!=a[3*i])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[3*i] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ 3*i ] = 'O';
                       kontrol=6;


                    }
                    break;
                }


                }



if(kontrol==4)
{

for( i = 0; i<3; i++)//SALDIRI DÝKEY
            {
                if((a[i]==a[i+3])&& (*insansecimi!=a[i])&&(*insansecimi!=a[i+6])&&(*playerPtr!=a[i+6])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[i+6] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ i+6 ] = 'O';
                       kontrol=6;


                    }
                    break;
                }

               else if((a[i+3]==a[i+6])&& (*insansecimi!=a[i+3])&&(*insansecimi!=a[i])&&(*playerPtr!=a[i])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[i] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ i ] = 'O';
                       kontrol=6;


                    }
                    break;
                }

            else if((a[i]==a[i+6])&& (*insansecimi!=a[i])&&(*insansecimi!=a[3+i])&&(*playerPtr!=a[3+i])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[3+i] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[3+i ] = 'O';
                       kontrol=6;


                    }
                    break;
                }


                }

}

if(kontrol!=6) //ÇAPRAZ SALDIRI
{
    if((a[0]==a[4])&& (*insansecimi!=a[0])&&(*insansecimi!=a[8])&&(*playerPtr!=a[8])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[8] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ 8 ] = 'O';
                       kontrol=6;


                    }

                }
    else if((a[0]==a[8])&& (*insansecimi!=a[0])&&(*insansecimi!=a[4])&&(*playerPtr!=a[4])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[4] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ 4 ] = 'O';
                       kontrol=6;


                    }

                }

    else if((a[8]==a[4])&& (*insansecimi!=a[8])&&(*insansecimi!=a[0])&&(*playerPtr!=a[0])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[0] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ 0 ] = 'O';
                       kontrol=6;


                    }

                }

    else if((a[2]==a[4])&& (*insansecimi!=a[2])&&(*insansecimi!=a[6])&&(*playerPtr!=a[6])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[6] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ 6 ] = 'O';
                       kontrol=6;


                    }

                }

    else if((a[4]==a[6])&& (*insansecimi!=a[4])&&(*insansecimi!=a[2])&&(*playerPtr!=a[2])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[2] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ 2 ] = 'O';
                       kontrol=6;


                    }

                }
    else if((a[2]==a[6])&& (*insansecimi!=a[2])&&(*insansecimi!=a[4])&&(*playerPtr!=a[4])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[4] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ 4 ] = 'O';
                       kontrol=6;


                    }

                }

}




    for( i = 0; i<3; i++)//SAVUNMA YATAY
            {
                if((a[3*i]==a[3*i+1])&& (*insansecimi==a[3*i])&&(*insansecimi!=a[3*i+2])&&(*playerPtr!=a[3*i+2])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[3*i+2] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ 3*i+2 ] = 'O';
                       kontrol=6;


                    }
                    break;
                }

               else if((a[3*i]==a[3*i+2])&& (*insansecimi==a[3*i])&&(*insansecimi!=a[3*i+1])&&(*playerPtr!=a[3*i+1])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[3*i+1] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ 3*i+1 ] = 'O';
                       kontrol=6;


                    }
                    break;
                }

            else if((a[3*i+2]==a[3*i+1])&& (*insansecimi!=a[3*i+2])&&(*insansecimi!=a[3*i])&&(*playerPtr!=a[3*i])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[3*i] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ 3*i ] = 'O';
                       kontrol=6;


                    }
                    break;
                }


                }




for( i = 0; i<3; i++)//SAVUNMA DÝKEY
            {
                if((a[i]==a[i+3])&& (*insansecimi==a[i])&&(*insansecimi!=a[i+6])&&(*playerPtr!=a[i+6])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[i+6] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ i+6 ] = 'O';
                       kontrol=6;


                    }
                    break;
                }

               else if((a[i+3]==a[i+6])&& (*insansecimi==a[i+3])&&(*insansecimi!=a[i])&&(*playerPtr!=a[i])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[i] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ i ] = 'O';
                       kontrol=6;


                    }
                    break;
                }

            else if((a[i]==a[i+6])&& (*insansecimi==a[i])&&(*insansecimi!=a[3+i])&&(*playerPtr!=a[3+i])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[3+i] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[3+i ] = 'O';
                       kontrol=6;


                    }
                    break;
                }


                }




    if((a[0]==a[4])&& (*insansecimi==a[0])&&(*insansecimi!=a[8])&&(*playerPtr!=a[8])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[8] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ 8 ] = 'O';
                       kontrol=6;


                    }

                }
    else if((a[0]==a[8])&& (*insansecimi==a[0])&&(*insansecimi!=a[4])&&(*playerPtr!=a[4])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[4] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ 4 ] = 'O';
                       kontrol=6;


                    }

                }

    else if((a[8]==a[4])&& (*insansecimi==a[8])&&(*insansecimi!=a[0])&&(*playerPtr!=a[0])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[0] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ 0 ] = 'O';
                       kontrol=6;


                    }

                }

    else if((a[2]==a[4])&& (*insansecimi==a[2])&&(*insansecimi!=a[6])&&(*playerPtr!=a[6])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[6] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ 6 ] = 'O';
                       kontrol=6;


                    }

                }

    else if((a[4]==a[6])&& (*insansecimi==a[4])&&(*insansecimi!=a[2])&&(*playerPtr!=a[2])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[2] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ 2 ] = 'O';
                       kontrol=6;


                    }

                }
    else if((a[2]==a[6])&& (*insansecimi==a[2])&&(*insansecimi!=a[4])&&(*playerPtr!=a[4])&&(kontrol!=6))
                {
                    if( *playerPtr == 'X' )
                    {
                        a[4] = 'X';
                        kontrol=6;


                    }

                    else
                    {
                       a[ 4 ] = 'O';
                       kontrol=6;


                    }

                }










if(kontrol==4)
{
    srand(time(NULL));


            choice = rand()%8;

            while(a[choice] =='X'||a[choice] =='O')
            {
                choice = rand()%8;

            }



             if( *playerPtr == 'X' )
               {
                    a[ choice] = 'X';

               }

            else
              {
                a[ choice ] = 'O';

              }
}









            }









        }












        void pcturneasy( char a[], char *playerPtr, char *insansecimi  )
        {


            if(*playerPtr==*insansecimi)
            {
               int available[8];
            int i, j = 0, choice;
            for(i = 0; i < 9; i++ )
                if( (a[i] != 'X') && (a[i] != 'O')  )
                available[ j++ ] = i;

            printf( "\n It is %c's turn.  Choose your move (", *playerPtr );

            for( i = 0; i < j; i++ )
                printf( " %d", available[i]);
            printf( " ): ");
            scanf( "%d", &choice);




              while((a[choice] == 'X') || (a[choice] == 'O'))
            {

                printf("Invalid move try choose ");
                scanf( "%d", &choice);

                                            }




            if( *playerPtr == 'X' )      a
                [ choice ] = 'X';
            else
                a[ choice ] = 'O';
            }

            else if(*playerPtr!=*insansecimi)
              {
               int available[8];
            int i, j = 0, choice;
            for(i = 0; i < 9; i++ )
                if( (a[i] != 'X') && (a[i] != 'O')  )
                available[ j++ ] = i;

            printf( "\n It is PC's turn.  Choose your move (" );

            for( i = 0; i < j; i++ )
                printf( " %d", available[i]);
            printf( " ): ");




            srand(time(NULL));


            choice = rand()%8;

            while(a[choice] =='X'||a[choice] =='O')
            {
                choice = rand()%8;
            }


            if( *playerPtr == 'X' )      a
                [ choice ] = 'X';
            else
                a[ choice ] = 'O';
            }



        }





void takeTurn( char a[], char *playerPtr  )
        {
            int available[8];
            int i, j = 0, choice;
            for(i = 0; i < 9; i++ )
                if( (a[i] != 'X') && (a[i] != 'O')  )
                available[ j++ ] = i;

            printf( "\n It is %c's turn.  Choose your move (", *playerPtr );

            for( i = 0; i < j; i++ )
                printf( " %d", available[i]);
            printf( " ): ");
            scanf( "%d", &choice);











              while((a[choice] == 'X') || (a[choice] == 'O'))
            {

                printf("Invalid move try choose ");
                scanf( "%d", &choice);

                                            }



            if( *playerPtr == 'X' )      a
                [ choice ] = 'X';
            else
                a[ choice ] = 'O';

        }

        int checkForWinner( char a[], int cnt, char* playerPtr  )
        {
            int i, gameOver = 0;
            for( i = 0; i < 3; i++ )
                {
                    if( a[3*i] == a[3*i + 1] && a[3*i + 1] == a[3*i + 2])
                    {

                          printf( "We have a winner! It is %c.\n\n", *playerPtr );

                          FILE *dosyaninadresi;
                            dosyaninadresi = fopen("C:\\Users\\PC\\Desktop\\version22\\sonhal.txt","w");
                          printf( "\n" );
                            fprintf(dosyaninadresi," %c | %c | %c \n", a[0], a[1], a[2]);
            fprintf(dosyaninadresi, "---|---|---\n");
            fprintf(dosyaninadresi," %c | %c | %c \n", a[3], a[4], a[5]);
            fprintf(dosyaninadresi, "---|---|---\n");
            fprintf(dosyaninadresi," %c | %c | %c \n", a[6], a[7], a[8]);
            fprintf(dosyaninadresi, "\n");


                             fprintf(dosyaninadresi,"We have a winner! It is %c.\n\n",*playerPtr);
                             fclose(dosyaninadresi);

                             gameOver = 1;

                    }
                    if( a[i] == a[i + 3] && a[i + 3] == a[i + 6])
                    {
                     printf( "Game over, man! %c dominates.\n\n", *playerPtr );





                          FILE *dosyaninadresi;
                            dosyaninadresi = fopen("C:\\Users\\PC\\Desktop\\version22\\sonhal.txt","w");
                          printf( "\n" );
                            fprintf(dosyaninadresi," %c | %c | %c \n", a[0], a[1], a[2]);
            fprintf(dosyaninadresi, "---|---|---\n");
            fprintf(dosyaninadresi," %c | %c | %c \n", a[3], a[4], a[5]);
            fprintf(dosyaninadresi, "---|---|---\n");
            fprintf(dosyaninadresi," %c | %c | %c \n", a[6], a[7], a[8]);
            fprintf(dosyaninadresi, "\n");


                             fprintf(dosyaninadresi,"Game over, man! %c dominates.\n\n", *playerPtr);
                             fclose(dosyaninadresi);








                             gameOver = 1;

                    }
                }

                if( a[0] == a[4] && a[4] == a[8])
                {
                    printf( "%c wins on a diagonal move!\n\n", *playerPtr );
  FILE *dosyaninadresi;
                            dosyaninadresi = fopen("C:\\Users\\PC\\Desktop\\version22\\sonhal.txt","w");
                          printf( "\n" );
                            fprintf(dosyaninadresi," %c | %c | %c \n", a[0], a[1], a[2]);
            fprintf(dosyaninadresi, "---|---|---\n");
            fprintf(dosyaninadresi," %c | %c | %c \n", a[3], a[4], a[5]);
            fprintf(dosyaninadresi, "---|---|---\n");
            fprintf(dosyaninadresi," %c | %c | %c \n", a[6], a[7], a[8]);
            fprintf(dosyaninadresi, "\n");


                             fprintf(dosyaninadresi,"%c wins on a diagonal move!\n\n", *playerPtr);
                             fclose(dosyaninadresi);

                             gameOver = 1;
                }
                if( a[2] == a[4] && a[4] == a[6])
                {
                     printf( "That's it. %c has won!\n\n", *playerPtr );
                   FILE *dosyaninadresi;
                            dosyaninadresi = fopen("C:\\Users\\PC\\Desktop\\version22\\sonhal.txt","w");
                          printf( "\n" );
                            fprintf(dosyaninadresi," %c | %c | %c \n", a[0], a[1], a[2]);
            fprintf(dosyaninadresi, "---|---|---\n");
            fprintf(dosyaninadresi," %c | %c | %c \n", a[3], a[4], a[5]);
            fprintf(dosyaninadresi, "---|---|---\n");
            fprintf(dosyaninadresi," %c | %c | %c \n", a[6], a[7], a[8]);
            fprintf(dosyaninadresi, "\n");


                             fprintf(dosyaninadresi,"That's it. %c has won!\n\n", *playerPtr);
                             fclose(dosyaninadresi);


                             gameOver = 1;


                }
                if( cnt == 8  && gameOver ==  0 )
                {
                    printf( "Awww. There is no winner!\n\n" );
                   FILE *dosyaninadresi;
                            dosyaninadresi = fopen("C:\\Users\\PC\\Desktop\\version22\\sonhal.txt","w");
                          printf( "\n" );
                            fprintf(dosyaninadresi," %c | %c | %c \n", a[0], a[1], a[2]);
            fprintf(dosyaninadresi, "---|---|---\n");
            fprintf(dosyaninadresi," %c | %c | %c \n", a[3], a[4], a[5]);
            fprintf(dosyaninadresi, "---|---|---\n");
            fprintf(dosyaninadresi," %c | %c | %c \n", a[6], a[7], a[8]);
            fprintf(dosyaninadresi, "\n");


                             fprintf(dosyaninadresi,"Awww. There is no winner!\n\n");
                             fclose(dosyaninadresi);

                             gameOver = 1;


                }
                return gameOver;
            }

        void swapPlayer( char *playerPtr )
        {
            if( *playerPtr == 'X' )
                *playerPtr = 'O';
            else      *playerPtr = 'X';
        }
