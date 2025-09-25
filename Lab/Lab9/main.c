#include <stdio.h>

int main() {
  int n ;
  int i = 0 ;
  int j = 0 ;

  printf( "Enter N : \n" ) ;
  scanf( "%d" , &n ) ;

  int arr[n];

  for( i = 0 ; i < n ; i++ ) {
    printf( "Enter value[%d] :\n" ,i ) ;
    scanf( "%d" , &arr[i] );
  }//end for

  printf( "Index: " ) ;
  for( i = 0 ; i < n ; i++ ) {
    printf( "%d " ,i ) ;
  }//end for

  printf( "\nArray: " );
  for( i = 0 ; i < n ; i++ ) {
    for( j = 2 ; j * j <= arr[i] ; j++ ) {
      if( arr[i] % j == 0) break ;
    }//end for

    if( j * j <= arr[i] ){
      printf( "# " ) ;
    }
    else{
      printf( "%d " , arr[i] ) ;
    }//end if
  }//end for
}//end function
