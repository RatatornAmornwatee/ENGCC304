#include <stdio.h>
#include <string.h>

int pow( int x , int y ) ;
void isarmstrong( char n[] ) ;

int main() {
  char nums[] = {} ;

  printf( "Enter Number:\n" ) ;
  scanf( "%s" , nums ) ;

  isarmstrong( nums ) ;
}//end func

int pow( int x , int y ) {
  int result = 1 ;
  for( ; y > 0 ; y-- ){
      result *= x ;
  }//end for
  return result ;
}//end function

void isarmstrong ( char n[] ) {
  int len = strlen( n ) ;
  int armstrong = 0 ;
  int sarms = 0 ;

  for( int i = 0 ; i < len ; i++ ) {
    armstrong += pow( n[i] - '0' , len ) ;
    sarms += ( n[i] - '0' ) * pow( 10 , len - i - 1 ) ;
  }//end for

  if( sarms == armstrong ) printf( "Pass." ) ;
  else printf( "Not Pass. %d ", armstrong ) ;
}//end function
