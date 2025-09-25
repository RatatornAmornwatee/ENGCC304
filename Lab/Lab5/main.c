#include <stdio.h>

int main() {
    int score ;
    printf( "enter score: \n" ) ;
    scanf( "%d" , &score ) ;
    
    if( score >= 80 )
        printf( "A !" ) ;
    else if( score < 80 && score >= 75 )
        printf( "D+ !" ) ;
    else if( score < 75 && score >= 70 )
        printf( "B !" ) ;
    else if( score < 70 && score >= 65 )
        printf( "C+ !" ) ;
    else if( score < 65 && score >= 60 )
        printf( "C !" ) ;
    else if( score < 60 && score >= 55 )
        printf( "D+ !" ) ;
    else if( score < 55 && score >= 50 )
        printf( "D !" ) ;
    else if( score < 50  && score >= 0)
        printf( "F !" ) ;
    else{
        printf( "please enter number only." ) ;
    }//end if

    return 0 ;

}//end function
