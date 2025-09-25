#include <stdio.h>

int main() {
  int position ;
  int years ;
  int projects ;

  int salary = 0 ;
  int experience = 0 ;
  int bonus  = 0 ;

  printf( "Position: " ) ;
  scanf( "%d" , &position ) ;
  printf( "Years of Experience: " ) ;
  scanf( "%d" , &years ) ;
  printf( "Number of Projects Completed this Yearn: " ) ;
  scanf( "%d" , &projects ) ;

  switch ( position ) {
    case 1: salary = 20000 ; break ;
    case 2: salary = 35000 ; break ;
    case 3: salary = 50000 ; break ;
  }//end switch

  if ( years >= 1 && years <= 3 ) experience = salary * 0.1 ;
  else if ( years <= 5 ) experience = salary * 0.15 ;
  else if ( years > 5) experience = salary * 0.2 ;

  if ( projects > 5 ) bonus = salary * 0.05 ;

  printf( "Base Salary: %d THB\n" , salary ) ;
  printf( "Experience Bonus: %d THB\n" , experience ) ;
  printf( "Special Bonus: %d THB\n" , bonus ) ;
  printf( "Net Salary: %d THB" , salary + experience + bonus ) ;
}//end function
