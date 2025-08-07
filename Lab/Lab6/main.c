#include <stdio.h>

int main() {
  int N = -1 ;
  printf( "Enter value: \n" ) ;
  scanf( "%d" , &N ) ;

  printf( "Series: " ) ;
  if( N % 2 == 0 ) {
    for( int i = N ; i >= 0 ; i-=2 ) {
      printf( "%d " , i ) ;
    }//end for
  }
  else if ( N % 2 > 0) {
    for( int i = 1 ; i <= N ; i+=2 ) {
      printf( "%d " , i ) ;
    }// end for
  }else{
    printf( "please enter number only." );
  }//end if

  return 0 ;
}//end function
