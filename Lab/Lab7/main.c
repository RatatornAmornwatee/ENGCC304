#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand( time( NULL ) ) ;

  int isplaying = 0 ;

  do {
    printf( "Do you want to play game (1=play,-1=exit)\n" ) ;
    scanf( "%d" , &isplaying ) ;

    if( isplaying == -1 ) {
      printf( "See you again." ) ;
    } else if ( isplaying != 1 ) {
      printf( "Please enter only 1 or -1." ) ;
    } else {
      int score = 100 ;
      int expected = rand() % 100 + 1 ;
      int guess = 0 ;
      int min = 0 , max = 100 ;

      printf( "\n(Score=100)\n" ) ;
      do {
        printf( "\nGuess the winning number (%d-%d) :\n" , min , max ) ;
        scanf( "%d" , &guess ) ;
        if( guess > expected ){
          score -= 10 ;
          printf( "\nSorry, the winning number is LOWER than %d. (Score=%d)\n" , guess , score ) ;
          max = guess ;
        }else if( guess < expected ) {
          score -= 10 ;
          printf( "\nSorry, the winning number is HIGHER than %d. (Score=%d)\n" , guess , score );
          min = guess ;
        }else{
          printf( "\nThat is correct! The winning number is %d.\n" , expected );
          break ;
        }
      } while( score > 0 );
      printf( "\nScore this game: %d\n\n" , score ) ;
    }
  } while( isplaying == 1 ) ;

  return 0 ;
}

