#include <stdio.h>
#include <string.h>

void Ispalindrome( char text[] );

int main() {
  char text[] = {} ;

  printf( "Enter word:\n" );
  scanf( "%s" , text ) ;

  Ispalindrome( text ) ;
}//end function

void Ispalindrome( char text[] ) {
  int i = 0 ;
  int j = strlen( text ) - 1 ;

  if( strlen(text ) % 2 == 0 ){
    printf( "Not Pass." ) ;
    return ;
  }//end if
  
  while( i == j ) {
    if ( text[i] != text[j] ) {
      printf( "Not Pass." ) ;
      return ;
    }//end function
    i++ ;
    j-- ;
  }//end while
  printf( "Pass." ) ; 
}//end function
