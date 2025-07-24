#include <stdio.h>

int main() {
  char emplyeeid[10] ;
  int workinghrs ;
  float salary ;

  printf( "Input the Employees ID(Max. 10 chars): \n" ) ;
  scanf( "%s" , &emplyeeid ) ;

  printf( "Input the working hrs: \n" ) ;
  scanf( "%d" , &workinghrs ) ;

  printf( "Salary amount/hr: \n" ) ;
  scanf( "%f" , &salary ) ;

  printf( "Employees ID = %s \n" , emplyeeid ) ;
  printf( "Salary = U$ %.2f" , workinghrs * salary ) ;
  
  return 0 ;
}//end function